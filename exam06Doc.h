// exam06Doc.h : interface of the CExam06Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EXAM06DOC_H__2A906594_C42C_41C5_86C5_38768BE53710__INCLUDED_)
#define AFX_EXAM06DOC_H__2A906594_C42C_41C5_86C5_38768BE53710__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CExam06Doc : public CDocument
{
protected: // create from serialization only
	CExam06Doc();
	DECLARE_DYNCREATE(CExam06Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExam06Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CExam06Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CExam06Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAM06DOC_H__2A906594_C42C_41C5_86C5_38768BE53710__INCLUDED_)
