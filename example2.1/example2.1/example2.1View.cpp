
// example2.1View.cpp : Cexample21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example2.1.h"
#endif

#include "example2.1Doc.h"
#include "example2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample21View

IMPLEMENT_DYNCREATE(Cexample21View, CView)

BEGIN_MESSAGE_MAP(Cexample21View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample21View ����/����

Cexample21View::Cexample21View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample21View::~Cexample21View()
{
}

BOOL Cexample21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample21View ����

void Cexample21View::OnDraw(CDC* /*pDC*/)
{
	Cexample21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexample21View ���

#ifdef _DEBUG
void Cexample21View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample21Doc* Cexample21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample21Doc)));
	return (Cexample21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample21View ��Ϣ�������


void Cexample21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r;
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.Height() < cr.Width())
	{
		r = cr.Height();
	}
	else { r = cr.Width(); }

	CRect a(0,0,r,r);
	this->GetClientRect(&a);
	CClientDC dc(this);
	dc.Ellipse(a);
	CView::OnLButtonDown(nFlags, point);
}
