
// example9_1View.h : Cexample9_1View ��Ľӿ�
//

#pragma once


class Cexample9_1View : public CView
{
protected: // �������л�����
	Cexample9_1View();
	DECLARE_DYNCREATE(Cexample9_1View)

// ����
public:
	Cexample9_1Doc* GetDocument() const;

// ����
public:
	CString s;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample9_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPush();
};

#ifndef _DEBUG  // example9_1View.cpp �еĵ��԰汾
inline Cexample9_1Doc* Cexample9_1View::GetDocument() const
   { return reinterpret_cast<Cexample9_1Doc*>(m_pDocument); }
#endif

