
// example_1View.h : Cexample_1View ��Ľӿ�
//

#pragma once


class Cexample_1View : public CView
{
protected: // �������л�����
	Cexample_1View();
	DECLARE_DYNCREATE(Cexample_1View)

// ����
public:
	Cexample_1Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int a;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example_1View.cpp �еĵ��԰汾
inline Cexample_1Doc* Cexample_1View::GetDocument() const
   { return reinterpret_cast<Cexample_1Doc*>(m_pDocument); }
#endif

