#ifndef MESSAGE
#define MESSAGE

typedef enum {
	login
	
} commandType;

class Message {
public:
	char buffer[256]; 
	commandType cmd;
	char[258] serialize();
	char[256] result;
};

#endif
