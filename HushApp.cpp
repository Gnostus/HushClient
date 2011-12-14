#include "HushApp.h"
#include "ClientFrame.h" 
#include "IDGenerator.h" 
#include "Contact.h"

ClientFrame* GetFrame(std::vector<Contact>& contacts) {
   ClientFrame *frame = new ClientFrame(contacts,  _("Hush..."), wxPoint(50, 50), wxSize(250, 440) );
   return frame;
}

void LoadContacts(std::vector<Contact>& contacts) {
     Contact billie("Billie Holiday");
     Contact max("Max Stirner");
     contacts.push_back(billie);
     contacts.push_back(max);
}

bool HushApp::OnInit()  {
    IDGenerator::SetId(0);
    std::vector<Contact> contacts;
    LoadContacts(contacts);
    ClientFrame *frame = GetFrame(contacts);
    frame->Show(true);
    SetTopWindow(frame);
    return true;
}
