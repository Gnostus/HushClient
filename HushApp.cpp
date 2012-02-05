#include "HushApp.h"
#include "ClientFrame.h" 
#include "IDGenerator.h" 

ClientFrame* GetFrame(std::vector<Contact>* contacts) {
   ClientFrame *frame = new ClientFrame(contacts,  _("Hush..."), wxPoint(50, 50), wxSize(250, 440) );
   return frame;
}

void LoadContacts(std::vector<Contact>* contacts) {
     Contact billie(_("Billie Holiday"));
     Contact max(_("Max Stirner"));
     contacts->push_back(billie);
     contacts->push_back(max);
}

bool HushApp::OnInit() {
	contacts = new std::vector<Contact>();
    LoadContacts(contacts);
    ClientFrame *frame = GetFrame(contacts);
    frame->Show(true);
    SetTopWindow(frame);
    return true;
}
