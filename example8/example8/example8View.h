
// example8View.h : Cexample8View ��Ľӿ�
//

#pragma once


class Cexample8View : public CView
{
protected: // �������л�����
	Cexample8View();
	DECLARE_DYNCREATE(Cexample8View)

// ����
public:
	Cexample8Doc* GetDocument() const;

// ����
public:
	int show;
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPuout();
	afx_msg void OnClose();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example8View.cpp �еĵ��԰汾
inline Cexample8Doc* Cexample8View::GetDocument() const
   { return reinterpret_cast<Cexample8Doc*>(m_pDocument); }
#endif

