
// example3View.h : Cexample3View ��Ľӿ�
//

#pragma once


class Cexample3View : public CView
{
protected: // �������л�����
	Cexample3View();
	DECLARE_DYNCREATE(Cexample3View)

// ����
public:
	Cexample3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample3View();
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

#ifndef _DEBUG  // example3View.cpp �еĵ��԰汾
inline Cexample3Doc* Cexample3View::GetDocument() const
   { return reinterpret_cast<Cexample3Doc*>(m_pDocument); }
#endif

