
// example2.3View.h : Cexample23View ��Ľӿ�
//

#pragma once


class Cexample23View : public CView
{
protected: // �������л�����
	Cexample23View();
	DECLARE_DYNCREATE(Cexample23View)

// ����
public:
	Cexample23Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample23View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example2.3View.cpp �еĵ��԰汾
inline Cexample23Doc* Cexample23View::GetDocument() const
   { return reinterpret_cast<Cexample23Doc*>(m_pDocument); }
#endif

