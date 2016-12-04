// exam06.h : main header file for the EXAM06 application
//

#if !defined(AFX_EXAM06_H__98E927FD_50AB_4C2E_A9A4_74332347EA54__INCLUDED_)
#define AFX_EXAM06_H__98E927FD_50AB_4C2E_A9A4_74332347EA54__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CExam06App:
// See exam06.cpp for the implementation of this class
//

class CExam06App : public CWinApp
{
public:
	CExam06App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExam06App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CExam06App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAM06_H__98E927FD_50AB_4C2E_A9A4_74332347EA54__INCLUDED_)
