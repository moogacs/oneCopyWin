// oneCopyWin.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "oneCopyWin.h"

#include "TrayApp.h"


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);


    //HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_ONECOPYWIN));

    // Main message loop:
    return TrayApp::getInstance().run(hInstance);
}


