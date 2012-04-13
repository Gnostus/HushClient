#ifndef CONTACT_FRAME
#define CONTACT_FRAME

#include <wx/wx.h>
#include "ContactList.h"

enum {
    ID_Quit = 1,
    ID_About,
    ID_Add_Contact,
    ID_Activated,
};

class ClientFrame: public wxFrame {
public:
    ClientFrame(std::vector<Contact>* contacts, const wxString& title, const wxPoint& pos, const wxSize& size);

    void OnAddContact(wxCommandEvent& WXUNUSED(event));
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
	void OnContactActivation();
    DECLARE_EVENT_TABLE()
private:
	ContactList* contactList;
    ContactListModel* model;
private:
      std::vector<Contact>* contacts;
};

#endif
