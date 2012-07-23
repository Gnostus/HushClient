#ifndef USER
#define USER

#include <wx/wx.h>
#include <vector>
#include "Contact.h"

class User {
public:
	User();
	void SetInfo(wxString name, wxString pass);
	void SetContacts(std::vector<Contact>* contacts);
	std::vector<Contact>* GetContacts();
	
private:
	wxString name;
	wxString passWord;
	std::vector<Contact>* contacts;
};

#endif
