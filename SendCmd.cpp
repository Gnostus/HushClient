#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include "Message.h"



void error(const char *msg)
{
    perror(msg);
    exit(0);
}

static void sendCommand(Message *msg) {
   int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server; 
    portno = 666;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) 
        error("ERROR opening socket");
    server = gethostbyname("127.0.0.1");
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    serv_addr.sin_port = htons(portno);
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
        error("ERROR connecting");
    printf("Please enter the message: "); 
    n = write(sockfd,msg->buffer,strlen(msg->buffer)+2);
    if (n < 0) 
         error("ERROR writing to socket");
    bzero(msg->result,256);
    n = read(sockfd,msg->result,255);
    if (n < 0) 
         error("ERROR reading from socket");
    printf("%s\n",msg->result);
    close(sockfd); 
}
