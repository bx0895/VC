
// example5_2View.h : Cexample5_2View ��Ľӿ�
//

#pragma once


class Cexample5_2View : public CView
{
protected: // �������л�����
	Cexample5_2View();
	DECLARE_DYNCREATE(Cexample5_2View)

// ����
public:
	Cexample5_2Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_Width;
	int m_Height;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexample5_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // example5_2View.cpp �еĵ��԰汾
inline Cexample5_2Doc* Cexample5_2View::GetDocument() const
   { return reinterpret_cast<Cexample5_2Doc*>(m_pDocument); }
#endif

