#ifndef CHAT_FRAME
#define CHAT_FRAME

#include <wx/wx.h>
#include "Contact.h"

class ChatModel {
public:
	ChatModel(Contact& contact);
		
private:
	Contact& contact;
};


class ChatFrame: public wxFrame {
public:
	ChatFrame(ChatModel& model, const wxString& title, const wxPoint& pos);
	ChatModel& model;
	
	DECLARE_EVENT_TABLE()

private:
	
};
#endif
