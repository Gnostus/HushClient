#include "HushApp.h"
#include "ClientFrame.h" 
#include "IDGenerator.h" 
#include "LoginFrame.h"
#include "User.h"

void LoadContacts(std::vector<Contact>* contacts) {
     Contact billie(_("Billie Holiday"));
     Contact max(_("Max Stirner"));
     contacts->push_back(billie);
     contacts->push_back(max);
}

bool HushApp::OnInit() {
	User user;
	LoginFrame *login = new LoginFrame(user, _("Login Please"), 
										wxPoint(50, 50), 
										wxSize(250, 440));
	if(!login->Prompt()) return true; 
	
	contacts = new std::vector<Contact>();
	user.SetContacts(contacts);
    LoadContacts(contacts);
    ClientFrame *frame = new ClientFrame(contacts, 
										_("Hush..."), 
										wxPoint(50, 50), 
										wxSize(250, 440));
    frame->Show(true);
    SetTopWindow(frame);
    return true;
}
