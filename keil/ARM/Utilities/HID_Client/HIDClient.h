// HIDClient.h : main header file for the HIDCLIENT application
//

#if !defined(AFX_HIDCLIENT_H__B04631B1_8B4B_45B5_9472_93B90C1B8D5F__INCLUDED_)
#define AFX_HIDCLIENT_H__B04631B1_8B4B_45B5_9472_93B90C1B8D5F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHIDClientApp:
// See HIDClient.cpp for the implementation of this class
//

class CHIDClientApp : public CWinApp
{
public:
	CHIDClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHIDClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHIDClientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HIDCLIENT_H__B04631B1_8B4B_45B5_9472_93B90C1B8D5F__INCLUDED_)
