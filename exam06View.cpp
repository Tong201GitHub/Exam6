// exam06View.cpp : implementation of the CExam06View class
//

#include "stdafx.h"
#include "exam06.h"

#include "exam06Doc.h"
#include "exam06View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExam06View

IMPLEMENT_DYNCREATE(CExam06View, CView)

BEGIN_MESSAGE_MAP(CExam06View, CView)
	//{{AFX_MSG_MAP(CExam06View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExam06View construction/destruction

CExam06View::CExam06View()
{
	// TODO: add construction code here

}

CExam06View::~CExam06View()
{
}

BOOL CExam06View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CExam06View drawing

void CExam06View::OnDraw(CDC* pDC)
{
	CExam06Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	GetClientRect(&m_rectClient);
	pDC->Rectangle(5,5,m_rectClient.Width()-5,m_rectClient.Height()-5);
}

/////////////////////////////////////////////////////////////////////////////
// CExam06View printing

BOOL CExam06View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CExam06View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CExam06View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CExam06View diagnostics

#ifdef _DEBUG
void CExam06View::AssertValid() const
{
	CView::AssertValid();
}

void CExam06View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExam06Doc* CExam06View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExam06Doc)));
	return (CExam06Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CExam06View message handlers
