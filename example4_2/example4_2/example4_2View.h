
// example4_2View.h : Cexample4_2View ��Ľӿ�
//

#pragma once


class Cexample4_2View : public CView
{
protected: // �������л�����
	Cexample4_2View();
	DECLARE_DYNCREATE(Cexample4_2View)

// ����
public:
	Cexample4_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample4_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // example4_2View.cpp �еĵ��԰汾
inline Cexample4_2Doc* Cexample4_2View::GetDocument() const
   { return reinterpret_cast<Cexample4_2Doc*>(m_pDocument); }
#endif

