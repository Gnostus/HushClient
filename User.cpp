#include "User.h"

User::User() {

}

void User::SetInfo(wxString _name, wxString _pass) {
	name = _name;
	passWord = _pass;
}

void User::SetContacts(std::vector<Contact>* _contacts) {
	contacts = _contacts;
}

std::vector<Contact>* User::GetContacts() {
	
}
