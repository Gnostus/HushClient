#include "Contact.h"
#include "IDGenerator.h"

Contact::Contact(string name) : name(name) {
	id = IDGenerator.GetId();
	status = offline; // query client
}

Contact::Contact(int id) : id(id) {
	name = "blankity"; // read from persistant storage
	status = offline; // query client
}

void Contact::OpenChat(int id) {

}
