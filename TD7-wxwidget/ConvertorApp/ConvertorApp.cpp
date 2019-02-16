// For compilers that don't support precompilation, include "wx/wx.h"
#include   <wx/wxprec.h> 

#ifndef   WX_PRECOMP
    #include   <wx/wx.h> 
#endif

#include   "ConvertorApp.hpp" 
#include   "ConvertorFrame.hpp" 

wxIMPLEMENT_APP (ConvertorApp);

bool   ConvertorApp::OnInit () {
    ConvertorFrame*frame= new ConvertorFrame (); 
    frame-> Show ( true );
    return   true ;
}