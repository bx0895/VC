
// example_4View.h : Cexample_4View ��Ľӿ�
//

#pragma once


class Cexample_4View : public CView
{
protected: // �������л�����
	Cexample_4View();
	DECLARE_DYNCREATE(Cexample_4View)

// ����
public:
	Cexample_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // example_4View.cpp �еĵ��԰汾
inline Cexample_4Doc* Cexample_4View::GetDocument() const
   { return reinterpret_cast<Cexample_4Doc*>(m_pDocument); }
#endif

