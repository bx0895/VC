
// example5_1View.h : Cexample5_1View ��Ľӿ�
//

#pragma once


class Cexample5_1View : public CView
{
protected: // �������л�����
	Cexample5_1View();
	DECLARE_DYNCREATE(Cexample5_1View)

// ����
public:
	Cexample5_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample5_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // example5_1View.cpp �еĵ��԰汾
inline Cexample5_1Doc* Cexample5_1View::GetDocument() const
   { return reinterpret_cast<Cexample5_1Doc*>(m_pDocument); }
#endif

