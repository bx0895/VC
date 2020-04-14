
// example_3View.cpp : Cexample_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example_3.h"
#endif

#include "example_3Doc.h"
#include "example_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_3View

IMPLEMENT_DYNCREATE(Cexample_3View, CView)

BEGIN_MESSAGE_MAP(Cexample_3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// Cexample_3View ����/����

Cexample_3View::Cexample_3View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 0;
	cr.right = 60;
	cr.top = 270;
	cr.bottom =330 ;
	t = 1;
}

Cexample_3View::~Cexample_3View()
{
}

BOOL Cexample_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample_3View ����

void Cexample_3View::OnDraw(CDC* pDC)
{
	Cexample_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect m_crect;
	GetClientRect(&m_crect);
	if (cr.right >= m_crect.right)
		t = 0;
	if (cr.left <= m_crect.left)
		t = 1;
	pDC->Ellipse(cr);

}


// Cexample_3View ���

#ifdef _DEBUG
void Cexample_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_3Doc* Cexample_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_3Doc)));
	return (Cexample_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_3View ��Ϣ�������


void Cexample_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample_3Doc* pDoc = GetDocument();
     if (t==1)
		{
			cr.left += 10;
			cr.right += 10;
			InvalidateRect(NULL, TRUE);
		}
	 else
	 {
		 cr.left -= 10;
		 cr.right -= 10;
		 InvalidateRect(NULL, TRUE);
	 }
	
		
	CView::OnTimer(nIDEvent);
}


void Cexample_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}


void Cexample_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample_3Doc* pDoc = GetDocument();

		SetTimer(1, 500, NULL);
	
	CView::OnLButtonDown(nFlags, point);
}


void Cexample_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}
