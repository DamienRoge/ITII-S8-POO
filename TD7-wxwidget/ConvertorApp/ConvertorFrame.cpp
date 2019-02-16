// For compilers that don't support precompilation, include "wx/wx.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "ConvertorFrame.hpp"

ConvertorFrame::ConvertorFrame()
: wxFrame(NULL, wxID_ANY, "Convertor")
{
// TODO
}

void ConvertorFrame::OnExit(wxCommandEvent& event)
{
Close(true);
}

void ConvertorFrame::OnAbout(wxCommandEvent& event)
{
wxMessageBox("This is a Convertor",

"About Convertor", wxOK | wxICON_INFORMATION);

}