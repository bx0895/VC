
// example5_3View.cpp : Cexample5_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example5_3.h"
#endif

#include "example5_3Doc.h"
#include "example5_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample5_3View

IMPLEMENT_DYNCREATE(Cexample5_3View, CView)

BEGIN_MESSAGE_MAP(Cexample5_3View, CView)
	ON_COMMAND(ID_ShowLine, &Cexample5_3View::OnShowline)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_ShowRectangle, &Cexample5_3View::OnShowrectangle)
	ON_COMMAND(ID_ShowElliptse, &Cexample5_3View::OnShowelliptse)
END_MESSAGE_MAP()

// Cexample5_3View ����/����

Cexample5_3View::Cexample5_3View()
{
	// TODO: �ڴ˴���ӹ������
	
}

Cexample5_3View::~Cexample5_3View()
{
}

BOOL Cexample5_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample5_3View ����

void Cexample5_3View::OnDraw(CDC* pDC)
{
	Cexample5_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->set ==1)
	{
		pDC->MoveTo(pDoc->m_point);
		pDC->LineTo(pDoc->n_point);
		ReleaseDC(pDC);
	}
	
	if (pDoc->set == 2)
	{
		pDC->Rectangle(pDoc->a);
	}
	if (pDoc->set == 3)
	{
		pDC->Ellipse(pDoc->a);
	}

}


// Cexample5_3View ���

#ifdef _DEBUG
void Cexample5_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample5_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample5_3Doc* Cexample5_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample5_3Doc)));
	return (Cexample5_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample5_3View ��Ϣ�������



void Cexample5_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Cexample5_3Doc* pDoc = GetDocument();
	pDoc->m_point.x = point.x;
	pDoc->m_point.y = point.y;
	pDoc->a.left = point.x;
	pDoc->a.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample5_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample5_3Doc* pDoc = GetDocument();
	pDoc->n_point.x = point.x;
	pDoc->n_point.y = point.y;
	pDoc->a.right = point.x;
	pDoc->a.bottom = point.y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonUp(nFlags, point);
}


void Cexample5_3View::OnShowline()
{
	// TODO: �ڴ���������������
	Cexample5_3Doc* pDoc = GetDocument();
	pDoc->set = 1;
}

void Cexample5_3View::OnShowrectangle()
{
	// TODO: �ڴ���������������
	Cexample5_3Doc* pDoc = GetDocument();
	pDoc->set = 2;
}


void Cexample5_3View::OnShowelliptse()
{
	// TODO: �ڴ���������������
	Cexample5_3Doc* pDoc = GetDocument();
	pDoc->set = 3;
}
