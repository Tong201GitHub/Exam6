// exam06Doc.cpp : implementation of the CExam06Doc class
//

#include "stdafx.h"
#include "exam06.h"

#include "exam06Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExam06Doc

IMPLEMENT_DYNCREATE(CExam06Doc, CDocument)

BEGIN_MESSAGE_MAP(CExam06Doc, CDocument)
	//{{AFX_MSG_MAP(CExam06Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExam06Doc construction/destruction

CExam06Doc::CExam06Doc()
{
	// TODO: add one-time construction code here

}

CExam06Doc::~CExam06Doc()
{
}

BOOL CExam06Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CExam06Doc serialization

void CExam06Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CExam06Doc diagnostics

#ifdef _DEBUG
void CExam06Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CExam06Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExam06Doc commands
