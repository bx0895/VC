
// example7View.h : Cexample7View ��Ľӿ�
//

#pragma once


class Cexample7View : public CView
{
protected: // �������л�����
	Cexample7View();
	DECLARE_DYNCREATE(Cexample7View)

// ����
public:
	Cexample7Doc* GetDocument() const;

// ����
public:
	CString m_strLine;
private: CPoint m_point;
    CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif


protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example7View.cpp �еĵ��԰汾
inline Cexample7Doc* Cexample7View::GetDocument() const
   { return reinterpret_cast<Cexample7Doc*>(m_pDocument); }
#endif

