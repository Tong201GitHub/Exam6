// exam06View.h : interface of the CExam06View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXAM06VIEW_H__DE1D6B5A_62B8_42A3_AD28_ECDDECCEC978__INCLUDED_)
#define AFX_EXAM06VIEW_H__DE1D6B5A_62B8_42A3_AD28_ECDDECCEC978__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CExam06View : public CView
{
protected: // create from serialization only
	CExam06View();
	DECLARE_DYNCREATE(CExam06View)

// Attributes
public:
	CExam06Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExam06View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	CRect m_rectClient;
	virtual ~CExam06View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CExam06View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in exam06View.cpp
inline CExam06Doc* CExam06View::GetDocument()
   { return (CExam06Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAM06VIEW_H__DE1D6B5A_62B8_42A3_AD28_ECDDECCEC978__INCLUDED_)
