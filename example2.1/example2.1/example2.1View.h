
// example2.1View.h : Cexample21View ��Ľӿ�
//

#pragma once


class Cexample21View : public CView
{
protected: // �������л�����
	Cexample21View();
	DECLARE_DYNCREATE(Cexample21View)

// ����
public:
	Cexample21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample21View();
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

#ifndef _DEBUG  // example2.1View.cpp �еĵ��԰汾
inline Cexample21Doc* Cexample21View::GetDocument() const
   { return reinterpret_cast<Cexample21Doc*>(m_pDocument); }
#endif

