
// example_2View.h : Cexample_2View ��Ľӿ�
//

#pragma once


class Cexample_2View : public CView
{
protected: // �������л�����
	Cexample_2View();
	DECLARE_DYNCREATE(Cexample_2View)

// ����
public:
	Cexample_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPuton();
};

#ifndef _DEBUG  // example_2View.cpp �еĵ��԰汾
inline Cexample_2Doc* Cexample_2View::GetDocument() const
   { return reinterpret_cast<Cexample_2Doc*>(m_pDocument); }
#endif

