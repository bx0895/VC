
// example3_3View.cpp : Cexample3_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example3_3.h"
#endif

#include "example3_3Doc.h"
#include "example3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_3View

IMPLEMENT_DYNCREATE(Cexample3_3View, CView)

BEGIN_MESSAGE_MAP(Cexample3_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexample3_3View ����/����

Cexample3_3View::Cexample3_3View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	T = true;
}

Cexample3_3View::~Cexample3_3View()
{
}

BOOL Cexample3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample3_3View ����

void Cexample3_3View::OnDraw(CDC* pDC)
{
	Cexample3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		SetTimer(1, 500, NULL);
		set = false;
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
}


// Cexample3_3View ���

#ifdef _DEBUG
void Cexample3_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_3Doc* Cexample3_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_3Doc)));
	return (Cexample3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_3View ��Ϣ�������


void Cexample3_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3_3Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);
	int n;
	if (pDoc->cr.bottom < crect.bottom)
	{

		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
		InvalidateRect(NULL, TRUE);
	}
	else
	{
		pDoc->cr.top -= 10;
		pDoc->cr.bottom -= 10;
	}

	InvalidateRect(NULL, TRUE);
	CView::OnTimer(nIDEvent);
}
