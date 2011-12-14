#ifndef CONTACT
#define CONTACT

#include <string>

typedef enum  {
	online,
	offline,
	away
} activeStatus;

class Contact  { 
public:
	Contact(std::string name);
	Contact(long id);
	void OpenChat(long id);
	long id;
	std::string name;
	
private: 
	activeStatus status;	
};

#endif