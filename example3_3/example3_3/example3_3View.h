
// example3_3View.h : Cexample3_3View ��Ľӿ�
//

#pragma once


class Cexample3_3View : public CView
{
protected: // �������л�����
	Cexample3_3View();
	DECLARE_DYNCREATE(Cexample3_3View)

// ����
public:
	Cexample3_3Doc* GetDocument() const;

// ����
public:
	bool set;
	bool T;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample3_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // example3_3View.cpp �еĵ��԰汾
inline Cexample3_3Doc* Cexample3_3View::GetDocument() const
   { return reinterpret_cast<Cexample3_3Doc*>(m_pDocument); }
#endif

