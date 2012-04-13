#include "ChatFrame.h"

ChatModel::ChatModel(Contact& contact) 
	: contact(contact) {
	
}

BEGIN_EVENT_TABLE(ChatFrame, wxFrame)  
END_EVENT_TABLE()

ChatFrame::ChatFrame(ChatModel& model, const wxString& title, const wxPoint& pos)
	:wxFrame(NULL, -1, title, pos, wxSize(100, 75)), model(model) {
		
}
