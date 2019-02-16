#ifndef CONVERTORFRAME_HPP
#define CONVERTORFRAME_HPP
#include <wx/frame.h>

class ConvertorFrame : public wxFrame
{
public:
ConvertorFrame();
private:
void OnExit(wxCommandEvent& event);
void OnAbout(wxCommandEvent& event);

// the panel containing everything
wxPanel *m_panel;
}; // ...

enum
{
ID_TextArea = 1
};
#endif // CONVERTORFRAME_HPP