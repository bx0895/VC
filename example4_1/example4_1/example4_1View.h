
// example4_1View.h : Cexample4_1View ��Ľӿ�
//

#pragma once


class Cexample4_1View : public CView
{
protected: // �������л�����
	Cexample4_1View();
	DECLARE_DYNCREATE(Cexample4_1View)

// ����
public:
	Cexample4_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample4_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRadius();
	afx_msg void OnRadiuscolor();
//	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // example4_1View.cpp �еĵ��԰汾
inline Cexample4_1Doc* Cexample4_1View::GetDocument() const
   { return reinterpret_cast<Cexample4_1Doc*>(m_pDocument); }
#endif

