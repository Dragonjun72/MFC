// MFCTest01.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "MFCTest01.h"
#include "MFCTest01Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest01App

BEGIN_MESSAGE_MAP(CMFCTest01App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCTest01App construction

CMFCTest01App::CMFCTest01App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMFCTest01App object

CMFCTest01App theApp;


// CMFCTest01App initialization

BOOL CMFCTest01App::InitInstance()
{
	CWinApp::InitInstance();
	
	CMFCTest01Dlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
/*
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CMFCTest01Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
*/
	return FALSE;
}
