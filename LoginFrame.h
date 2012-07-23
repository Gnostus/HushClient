#ifndef LOGIN_FRAME
#define LOGIN_FRAME

#include "User.h" 
#include <wx/wx.h>

typedef enum {
	Success,
	Fail,
	Cancel
} LoginResult; 

class LoginFrame: public wxDialog {
public:
	bool Prompt();
	LoginFrame(User& user, const wxString& title, const wxPoint& pos, const wxSize& size);
	LoginResult Result;
	User& user;
};
#endif
