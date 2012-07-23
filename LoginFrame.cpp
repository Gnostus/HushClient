#include "LoginFrame.h"
#include "SendCmd.cpp"

LoginFrame::LoginFrame(User& user, const wxString& title, const wxPoint& pos, const wxSize& size) 
       : wxDialog(NULL, -1, title, pos, size), user(user) {
		Result = Fail;
}

bool LoginFrame::Prompt() {
	while(Result != Success) { 
		ShowModal();
		// send server request
		sendCommand(new Message()); 
		// set result
		if(Result == Cancel) {
			Close();
			return false;
		}
	}
	return true;
}
