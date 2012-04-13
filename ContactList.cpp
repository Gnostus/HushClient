#include "ContactList.h"
#include "ClientFrame.h" 

BEGIN_EVENT_TABLE(ContactList, wxListCtrl) 
	EVT_LIST_ITEM_ACTIVATED(ID_ITEM_ACTIVATED, ContactList::OnContactActivation)
END_EVENT_TABLE()

ContactListModel::ContactListModel(std::vector<Contact>* contacts):contacts(contacts) {}

ContactList::ContactList(ContactListModel* model, wxWindow* parent, wxWindowID id)
       : wxListCtrl(parent, id), model(model) {
	   InsertColumn(0, _("User Name"));
	   InsertColumn(1, _("User ID"));
	   RefreshData();
}

void ContactList::RefreshData() {
	ClearAll();
	for (std::vector<Contact>::iterator contact = model->contacts->begin(); contact != model->contacts->end(); ++contact)
	   SetItem(InsertItem(contact->id, contact->name), contact->id, contact->name); 	
}

void ContactList::OnContactActivation(wxListEvent& event) {
	for(std::vector<Contact>::iterator contact = model->contacts->begin(); contact != model->contacts->end(); ++contact) {
		if(contact->name == event.GetText()) {
			model->selectedContact = &(*contact);
		}
	}
	 ((ClientFrame*)GetParent())->OnContactActivation();
}
