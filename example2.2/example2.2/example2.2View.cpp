
// example2.2View.cpp : Cexample22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example2.2.h"
#endif

#include "example2.2Doc.h"
#include "example2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample22View

IMPLEMENT_DYNCREATE(Cexample22View, CView)

BEGIN_MESSAGE_MAP(Cexample22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample22View ����/����

Cexample22View::Cexample22View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(256);
}

Cexample22View::~Cexample22View()
{
}

BOOL Cexample22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample22View ����

void Cexample22View::OnDraw(CDC* pDC)
{
	Cexample22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < ca.GetSize(); i++) {
		pDC->Ellipse(ca.GetAt(i));//���һ�³���һ����Բ�����ڸı��ʱ����Բ����
	}
}


// Cexample22View ���

#ifdef _DEBUG
void Cexample22View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample22Doc* Cexample22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample22Doc)));
	return (Cexample22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample22View ��Ϣ�������


void Cexample22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int a = rand() % 50 + 5;
	int b = rand() % 50 + 10;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	ca.Add(cr);//����Բ���뵽������
	this->Invalidate();
	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
