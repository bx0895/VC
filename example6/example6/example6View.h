
// example6View.h : Cexample6View ��Ľӿ�
//

#pragma once


class Cexample6View : public CView
{
protected: // �������л�����
	Cexample6View();
	DECLARE_DYNCREATE(Cexample6View)

// ����
public:
	Cexample6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // example6View.cpp �еĵ��԰汾
inline Cexample6Doc* Cexample6View::GetDocument() const
   { return reinterpret_cast<Cexample6Doc*>(m_pDocument); }
#endif

