
// example4_2View.cpp : Cexample4_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example4_2.h"
#endif

#include "example4_2Doc.h"
#include "example4_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample4_2View

IMPLEMENT_DYNCREATE(Cexample4_2View, CView)

BEGIN_MESSAGE_MAP(Cexample4_2View, CView)
	ON_COMMAND(ID_Circle, &Cexample4_2View::OnCircle)
END_MESSAGE_MAP()

// Cexample4_2View ����/����

Cexample4_2View::Cexample4_2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample4_2View::~Cexample4_2View()
{
}

BOOL Cexample4_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample4_2View ����

void Cexample4_2View::OnDraw(CDC* /*pDC*/)
{
	Cexample4_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexample4_2View ���

#ifdef _DEBUG
void Cexample4_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample4_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample4_2Doc* Cexample4_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample4_2Doc)));
	return (Cexample4_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample4_2View ��Ϣ�������


void Cexample4_2View::OnCircle()
{
	// TODO: �ڴ���������������
	CRect rect;
	GetClientRect(&rect);
	CClientDC dc(this);
	int n = (rect.bottom - rect.top) / 2;
	int m = (rect.right - rect.left - 2 * n) / 2;
	int x1 = rect.left + m;  int y1 = rect.top;
	int x2 = rect.right - m;  int y2 = rect.bottom;
	for (int i = 0; i <= 15; i++)
	{
		CPen pen(PS_SOLID, 2, RGB(200-i*4, 150-i*6 ,i*14));
		CPen* pOldPen = dc.SelectObject(&pen);
		CRect m_crect(x1 + i * 15, y1 + i * 15, x2 - i * 15, y2 - i * 15);
		dc.Ellipse(m_crect);
		dc.SelectObject(pOldPen);
	}
}
