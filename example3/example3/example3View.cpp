
// example3View.cpp : Cexample3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example3.h"
#endif

#include "example3Doc.h"
#include "example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3View

IMPLEMENT_DYNCREATE(Cexample3View, CView)

BEGIN_MESSAGE_MAP(Cexample3View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample3View ����/����

Cexample3View::Cexample3View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample3View::~Cexample3View()
{
}

BOOL Cexample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample3View ����

void Cexample3View::OnDraw(CDC* pDC)
{
	Cexample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rc);
}


// Cexample3View ���

#ifdef _DEBUG
void Cexample3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3Doc* Cexample3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3Doc)));
	return (Cexample3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3View ��Ϣ�������


void Cexample3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3Doc* pDoc = GetDocument();
	CString c;
	c.Format(_T("X=%d Y=%d"),point.x,point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, c);
	CView::OnMouseMove(nFlags, point);
}


void Cexample3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3Doc* pDoc = GetDocument();
	pDoc->rc.left = point.x;
	pDoc->rc.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3Doc* pDoc = GetDocument();
	pDoc->rc.right = point.x;
	pDoc->rc.bottom = point.y;
	InvalidateRect(NULL, TRUE);//ǿ���ػ�
	CView::OnLButtonUp(nFlags, point);
}
