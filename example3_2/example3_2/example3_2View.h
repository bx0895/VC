
// example3_2View.h : Cexample3_2View ��Ľӿ�
//

#pragma once


class Cexample3_2View : public CView
{
protected: // �������л�����
	Cexample3_2View();
	DECLARE_DYNCREATE(Cexample3_2View)

// ����
public:
	Cexample3_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample3_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example3_2View.cpp �еĵ��԰汾
inline Cexample3_2Doc* Cexample3_2View::GetDocument() const
   { return reinterpret_cast<Cexample3_2Doc*>(m_pDocument); }
#endif

