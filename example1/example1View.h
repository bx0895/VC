
// example1View.h : Cexample1View ��Ľӿ�
//

#pragma once


class Cexample1View : public CView
{
protected: // �������л�����
	Cexample1View();
	DECLARE_DYNCREATE(Cexample1View)

// ����
public:
	Cexample1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cexample1View();
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

#ifndef _DEBUG  // example1View.cpp �еĵ��԰汾
inline Cexample1Doc* Cexample1View::GetDocument() const
   { return reinterpret_cast<Cexample1Doc*>(m_pDocument); }
#endif

