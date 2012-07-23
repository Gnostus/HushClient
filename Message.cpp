#include "Message.h"

Message::Message() {

}

char[258] Message::serialize() {
	char[258] message;
    strcpy(message, buffer);
    message[256] = (char)cmd;

	
}
