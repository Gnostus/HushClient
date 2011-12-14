#ifndef ADD_CONTACT_FRAME
#define ADD_CONTACT_FRAME

#include <wx/wx.h>

enum {
    ID_Cancel = 1, 
    ID_Ok,
    ID_Contact_Name
};

class AddContactFrame: public wxFrame {
public:
    AddContactFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    void Cancel(wxCommandEvent& evt);
    DECLARE_EVENT_TABLE()     
};

#endif