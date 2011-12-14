#include "ClientFrame.h"  
#include <vector>

BEGIN_EVENT_TABLE(ClientFrame, wxFrame)
    EVT_MENU(ID_Quit,  ClientFrame::OnQuit)
    EVT_MENU(ID_About, ClientFrame::OnAbout)
END_EVENT_TABLE()

void INSERT_TEST_DATA(ContactList* list) {
    long index = list->InsertItem(0, _("John Smith"));
    list->SetItem(index, 1, _("jsmith"));
}

ClientFrame::ClientFrame(const wxString& title, const wxPoint& pos, const wxSize& size) 
       : wxFrame(NULL, -1, title, pos, size) {
    wxMenu *menuFile = new wxMenu;
    wxBoxSizer * box = new wxBoxSizer(wxVERTICAL);
    std::vector<Contact> contacts;
    ContactList * contactList = new ContactList(contacts, this, wxNewId());
    
    menuFile->Append( ID_About, _("&About...") );
    menuFile->AppendSeparator();
    menuFile->Append( ID_Quit, _("E&xit") );
    
    box->Add(contactList, 1, wxEXPAND, 0);
    SetSizer(box);
    
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, _("&Main") ); 
    contactList->InsertColumn(0, _("User Name"));
    contactList->InsertColumn(1, _("User ID"));
    SetMenuBar( menuBar );

    CreateStatusBar();
    SetStatusText( _("Ⓐ") );
    
    // delete me later
    INSERT_TEST_DATA(contactList);
} 

void ClientFrame::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    Close(true);
}
 
void ClientFrame::OnAbout(wxCommandEvent& WXUNUSED(event)) {
    wxMessageBox( _("This is an encrypted chat client,\n keep the sniffers off your convo!"), 
			    _("About HushChat"),
			    wxOK | wxICON_INFORMATION,
			    this );
}

