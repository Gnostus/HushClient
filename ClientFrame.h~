#include <wx/wx.h>
#include "IFrame.h"
#include "ContactList.h"

enum
{
    ID_Quit = 1,
    ID_About,
};

class ClientFrame: public wxFrame {
public:
    ClientFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
	
    DECLARE_EVENT_TABLE()
};
