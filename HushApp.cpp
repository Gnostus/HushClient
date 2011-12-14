#include "HushApp.h"
#include "ClientFrame.h" 

ClientFrame* GetFrame() {
   ClientFrame *frame = new ClientFrame( _("Hush..."), wxPoint(50, 50), wxSize(250, 440) );
   return frame;
}

bool HushApp::OnInit() {
	
    ClientFrame *frame = GetFrame();
    frame->Show(true);
    SetTopWindow(frame);
    return true;
}
