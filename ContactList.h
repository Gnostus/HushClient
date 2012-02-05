#ifndef CONTACT_LIST
#define CONTACT_LIST

#include <wx/wx.h>
#include "Contact.h"
#include <vector>

enum {
	ID_ITEM_ACTIVATED
};

class ContactList: public wxListCtrl {
public:
    ContactList(std::vector<Contact>* contacts, wxWindow* parent, wxWindowID id);
	void OnContactActivation(wxListEvent& event);
	void RefreshData();
    DECLARE_EVENT_TABLE()
  
private:
	std::vector<Contact>* contacts;
};

#endif
