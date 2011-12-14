#include "ContactList.h"

BEGIN_EVENT_TABLE(ContactList, wxListCtrl) 
	EVT_LIST_ITEM_ACTIVATED(ID_ITEM_ACTIVATED, ContactList::OnContactActivation)
END_EVENT_TABLE()

ContactList::ContactList(std::vector<Contact&>& contacts, wxWindow* parent, wxWindowID id)
       : wxListCtrl(parent, id), contacts(contacts) {
	
}

void ContactList::OnContactActivation(wxListEvent& event) {
	
}
