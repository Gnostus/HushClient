#include "ContactList.h"

BEGIN_EVENT_TABLE(ContactList, wxListCtrl) 
	EVT_LIST_ITEM_ACTIVATED(ID_ITEM_ACTIVATED, ContactList::OnContactActivation)
END_EVENT_TABLE()

ContactList::ContactList(std::vector<Contact>* contacts, wxWindow* parent, wxWindowID id)
       : wxListCtrl(parent, id), contacts(contacts) {
	   InsertColumn(0, _("User Name"));
	   InsertColumn(1, _("User ID"));
	   RefreshData();
}

void ContactList::RefreshData() {
	ClearAll();
	for (std::vector<Contact>::iterator contact = contacts->begin(); contact != contacts->end(); ++contact)
	   SetItem(InsertItem(contact->id, contact->name), contact->id, contact->name); 	
}

void ContactList::OnContactActivation(wxListEvent& event) {
	
}
