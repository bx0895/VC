
// example2View.h : Cexample2View ��Ľӿ�
//

#pragma once


class Cexample2View : public CView
{
protected: // �������л�����
	Cexample2View();
	DECLARE_DYNCREATE(Cexample2View)

// ����
public:
	Cexample2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example2View.cpp �еĵ��԰汾
inline Cexample2Doc* Cexample2View::GetDocument() const
   { return reinterpret_cast<Cexample2Doc*>(m_pDocument); }
#endif

