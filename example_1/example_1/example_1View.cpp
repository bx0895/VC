
// example_1View.cpp : Cexample_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example_1.h"
#endif

#include "example_1Doc.h"
#include "example_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_1View

IMPLEMENT_DYNCREATE(Cexample_1View, CView)

BEGIN_MESSAGE_MAP(Cexample_1View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample_1View ����/����

Cexample_1View::Cexample_1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 300;
	cr.right = 450;
	cr.top = 200;
	cr.bottom = 300;
	a = 0;
}

Cexample_1View::~Cexample_1View()
{
}

BOOL Cexample_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample_1View ����

void Cexample_1View::OnDraw(CDC* pDC)
{
	Cexample_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
}


// Cexample_1View ���

#ifdef _DEBUG
void Cexample_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_1Doc* Cexample_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_1Doc)));
	return (Cexample_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_1View ��Ϣ�������


void Cexample_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if (a == 1)
	{
	cr.left = point.x;
	cr.top = point.y;
	cr.right = point.x + 150;
	cr.bottom = point.y + 100;
	dc.Rectangle(cr);
	Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void Cexample_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	a = 1;
	

	CView::OnLButtonDown(nFlags, point);
}


void Cexample_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	a = 0;
	CView::OnLButtonUp(nFlags, point);
}
