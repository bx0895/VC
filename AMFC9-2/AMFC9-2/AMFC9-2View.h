
// AMFC9-2View.h : CAMFC92View ��Ľӿ�
//

#pragma once


class CAMFC92View : public CView
{
protected: // �������л�����
	CAMFC92View();
	DECLARE_DYNCREATE(CAMFC92View)

// ����
public:
	CAMFC92Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CAMFC92View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // AMFC9-2View.cpp �еĵ��԰汾
inline CAMFC92Doc* CAMFC92View::GetDocument() const
   { return reinterpret_cast<CAMFC92Doc*>(m_pDocument); }
#endif

