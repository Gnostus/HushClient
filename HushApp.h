#ifndef HUSH_APP
#define HUSH_APP
#include <wx/wx.h>
#include <vector>
#include "Contact.h"

class HushApp: public wxApp {
    virtual bool OnInit();
private:
	std::vector<Contact>* contacts;
};

#endif
