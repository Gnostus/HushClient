#ifndef CONTACT_LIST
#define CONTACT_LIST

#include <wx/wx.h>
#include "Contact.h"
#include <vector>


class ContactListModel {
public:
	ContactListModel(std::vector<Contact>* contacts);
	Contact* selectedContact;
	std::vector<Contact>* contacts;
};

enum {
	ID_ITEM_ACTIVATED
};

class ContactList: public wxListCtrl {
public:
    ContactList(ContactListModel* model, wxWindow* parent, wxWindowID id);
	void OnContactActivation(wxListEvent& event);
	void RefreshData();
    DECLARE_EVENT_TABLE()

private:
	ContactListModel* model;
};

#endif
