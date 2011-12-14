#include "AddContactFrame.h"

BEGIN_EVENT_TABLE(AddContactFrame, wxFrame) 
    EVT_BUTTON(ID_Cancel, AddContactFrame::Cancel)
    EVT_BUTTON(ID_Ok, AddContactFrame::Cancel)
END_EVENT_TABLE()

AddContactFrame::AddContactFrame(const wxString& title, const wxPoint& pos, const wxSize& size) 
       : wxFrame(NULL, -1, title, pos, size) {
      wxTextCtrl *contactName = new wxTextCtrl(this, ID_Contact_Name, _(""), wxDefaultPosition, wxSize(size.GetWidth(), 20));
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
    Close(true);
}
