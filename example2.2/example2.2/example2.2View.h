
// example2.2View.h : Cexample22View ��Ľӿ�
//

#pragma once


class Cexample22View : public CView
{
protected: // �������л�����
	Cexample22View();
	DECLARE_DYNCREATE(Cexample22View)

// ����
public:
	Cexample22Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;//�������������������ΪCRect

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample22View();
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
};

#ifndef _DEBUG  // example2.2View.cpp �еĵ��԰汾
inline Cexample22Doc* Cexample22View::GetDocument() const
   { return reinterpret_cast<Cexample22Doc*>(m_pDocument); }
#endif

