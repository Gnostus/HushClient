#include "ContactList.h"

BEGIN_EVENT_TABLE(ContactList, wxListCtrl) 
	EVT_LIST_ITEM_ACTIVATED(ID_ITEM_ACTIVATED, ContactList::OnContactActivation)
END_EVENT_TABLE()

ContactList::ContactList(std::vector<Contact>& contacts, wxWindow* parent, wxWindowID id)
       : wxListCtrl(parent, id), contacts(contacts) {
	   InsertColumn(0, _("User Name"));
	   InsertColumn(1, _("User ID"));
	    
	 for(int i=0; i<contacts.size(); i++)  {
	   Contact contact = contacts[i];
	   long id = contact.id;
	   wxString name = wxString::FromAscii(contact.name.c_str());
	   long index =  InsertItem(id, name);
	   SetItem(index, id, name);
	 }
}

void ContactList::OnContactActivation(wxListEvent& event) {
	
}
