
// example3_1View.cpp : Cexample3_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example3_1.h"
#endif

#include "example3_1Doc.h"
#include "example3_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_1View

IMPLEMENT_DYNCREATE(Cexample3_1View, CView)

BEGIN_MESSAGE_MAP(Cexample3_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample3_1View ����/����

Cexample3_1View::Cexample3_1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample3_1View::~Cexample3_1View()
{
}

BOOL Cexample3_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample3_1View ����

void Cexample3_1View::OnDraw(CDC* pDC)
{
	Cexample3_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	CString c;
	s.Format(_T("�������%d"), pDoc->x);
	c.Format(_T("��������%d"), pDoc->count);
	pDC->TextOutW(50, 50, c);
	pDC->TextOutW(200, 50, s);
	pDoc->count = 0;
	pDoc->x = 0;
}


// Cexample3_1View ���

#ifdef _DEBUG
void Cexample3_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_1Doc* Cexample3_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_1Doc)));
	return (Cexample3_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_1View ��Ϣ�������


void Cexample3_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3_1Doc* pDoc = GetDocument();
	pDoc->m_point.x = point.x;
	pDoc->m_point.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample3_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3_1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnMouseMove(nFlags, point);
}


void Cexample3_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Cexample3_1Doc* pDoc = GetDocument();
	if(point.x>pDoc->m_point.x)
	pDoc->x = (point.x - pDoc->m_point.x)/ pDoc->count;
	else pDoc->x = ( pDoc->m_point.x- point.x) / pDoc->count;
	Invalidate(TRUE);
	CView::OnLButtonUp(nFlags, point);
}
