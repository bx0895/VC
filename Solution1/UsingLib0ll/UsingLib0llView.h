
// UsingLib0llView.h : CUsingLib0llView ��Ľӿ�
//

#pragma once


class CUsingLib0llView : public CView
{
protected: // �������л�����
	CUsingLib0llView();
	DECLARE_DYNCREATE(CUsingLib0llView)

// ����
public:
	CUsingLib0llDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingLib0llView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLib0llView.cpp �еĵ��԰汾
inline CUsingLib0llDoc* CUsingLib0llView::GetDocument() const
   { return reinterpret_cast<CUsingLib0llDoc*>(m_pDocument); }
#endif

