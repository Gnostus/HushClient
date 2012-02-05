#include "AddContactFrame.h"

BEGIN_EVENT_TABLE(AddContactFrame, wxDialog) 
    EVT_BUTTON(ID_Cancel, AddContactFrame::Cancel)
    EVT_BUTTON(ID_Ok, AddContactFrame::Ok)
END_EVENT_TABLE()

AddContactFrame::AddContactFrame(const wxString& title, const wxSize& size, AddContactModel& model) 
       : wxDialog((wxDialog *)NULL, -1, title, wxDefaultPosition, size), model(model) {
		   
      contactName = new wxTextCtrl(this, ID_Contact_Name, _(""), wxDefaultPosition, wxSize(size.GetWidth(), 20));
      wxButton* cancel = new wxButton(this, ID_Cancel,  _T("Cancel")); 
      wxButton* ok = new wxButton(this, ID_Ok,  _T("OK")); 
      wxBoxSizer* verticalSizer = new wxBoxSizer(wxVERTICAL); 
      wxBoxSizer* textBox = new wxBoxSizer(wxHORIZONTAL); 
      wxBoxSizer* buttonBox = new wxBoxSizer(wxHORIZONTAL); 
      textBox->Add(contactName);
      buttonBox->Add(ok);
      buttonBox->Add(cancel);
      verticalSizer->Add(textBox); 
      verticalSizer->Add(buttonBox);
      SetSizer(verticalSizer);
}

void AddContactFrame::Cancel(wxCommandEvent& evt) {
	model.successful = false;
    Close(true);
}

void AddContactFrame::Ok(wxCommandEvent& evt) {
	model.contactName = contactName->GetValue();
	model.successful = true;
	Close(true);
}
