
// example5_3View.h : Cexample5_3View ��Ľӿ�
//

#pragma once


class Cexample5_3View : public CView
{
protected: // �������л�����
	Cexample5_3View();
	DECLARE_DYNCREATE(Cexample5_3View)

// ����
public:
	Cexample5_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample5_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnShowrectangle();
	afx_msg void OnShowelliptse();
};

#ifndef _DEBUG  // example5_3View.cpp �еĵ��԰汾
inline Cexample5_3Doc* Cexample5_3View::GetDocument() const
   { return reinterpret_cast<Cexample5_3Doc*>(m_pDocument); }
#endif

