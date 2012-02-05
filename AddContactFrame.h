#ifndef ADD_CONTACT_FRAME
#define ADD_CONTACT_FRAME

#include <wx/wx.h>

enum {
    ID_Cancel = 1, 
    ID_Ok,
    ID_Contact_Name
};

class AddContactModel {
public:
	AddContactModel() {};
	wxString contactName;
	bool successful;
};

class AddContactFrame: public wxDialog {
public:
    AddContactFrame(const wxString& title, const wxSize& size,  AddContactModel& model);
    void Cancel(wxCommandEvent& evt);
    void Ok(wxCommandEvent& evt);
    AddContactModel& model;
     wxTextCtrl *contactName;
    DECLARE_EVENT_TABLE()     
};

#endif
