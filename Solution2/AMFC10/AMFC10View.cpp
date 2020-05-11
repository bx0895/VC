
// AMFC10View.cpp : CAMFC10View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC10.h"
#endif

#include "AMFC10Doc.h"
#include "AMFC10View.h"
#include "win32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC10View

IMPLEMENT_DYNCREATE(CAMFC10View, CView)

BEGIN_MESSAGE_MAP(CAMFC10View, CView)
END_MESSAGE_MAP()

// CAMFC10View ����/����

CAMFC10View::CAMFC10View()
{
	// TODO: �ڴ˴���ӹ������

}

CAMFC10View::~CAMFC10View()
{
}

BOOL CAMFC10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CAMFC10View ����

void CAMFC10View::OnDraw(CDC* pDC)
{
	CAMFC10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s.Format(_T("%d"), factorial(5));
	pDC->TextOutW(300, 100, s);
}


// CAMFC10View ���

#ifdef _DEBUG
void CAMFC10View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC10Doc* CAMFC10View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC10Doc)));
	return (CAMFC10Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC10View ��Ϣ�������
