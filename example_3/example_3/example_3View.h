
// example_3View.h : Cexample_3View ��Ľӿ�
//

#pragma once


class Cexample_3View : public CView
{
protected: // �������л�����
	Cexample_3View();
	DECLARE_DYNCREATE(Cexample_3View)

// ����
public:
	Cexample_3Doc* GetDocument() const;

// ����
public:
	CRect cr;
	
	int t;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example_3View.cpp �еĵ��԰汾
inline Cexample_3Doc* Cexample_3View::GetDocument() const
   { return reinterpret_cast<Cexample_3Doc*>(m_pDocument); }
#endif

