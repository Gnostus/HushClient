#ifndef CONTACT
#define CONTACT
 
#include <wx/wx.h>

typedef enum  {
	online,
	offline,
	away
} activeStatus;

class Contact  { 
public:
	Contact(wxString name);
	Contact(long id);
	void OpenChat(long id);
	long id;
	wxString name;
	
private: 
	activeStatus status;	
};

#endif
