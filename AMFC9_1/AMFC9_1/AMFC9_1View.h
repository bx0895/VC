
// AMFC9_1View.h : CAMFC9_1View ��Ľӿ�
//

#pragma once


class CAMFC9_1View : public CView
{
protected: // �������л�����
	CAMFC9_1View();
	DECLARE_DYNCREATE(CAMFC9_1View)

// ����
public:
	CAMFC9_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CAMFC9_1View();
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
	afx_msg void OnFileSaveAs();
	afx_msg void OnPop();
};

#ifndef _DEBUG  // AMFC9_1View.cpp �еĵ��԰汾
inline CAMFC9_1Doc* CAMFC9_1View::GetDocument() const
   { return reinterpret_cast<CAMFC9_1Doc*>(m_pDocument); }
#endif

