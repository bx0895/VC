
// AMFC10View.h : CAMFC10View ��Ľӿ�
//

#pragma once


class CAMFC10View : public CView
{
protected: // �������л�����
	CAMFC10View();
	DECLARE_DYNCREATE(CAMFC10View)

// ����
public:
	CAMFC10Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CAMFC10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AMFC10View.cpp �еĵ��԰汾
inline CAMFC10Doc* CAMFC10View::GetDocument() const
   { return reinterpret_cast<CAMFC10Doc*>(m_pDocument); }
#endif

