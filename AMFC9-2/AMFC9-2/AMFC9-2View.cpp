
// AMFC9-2View.cpp : CAMFC92View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC9-2.h"
#endif

#include "AMFC9-2Doc.h"
#include "AMFC9-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC92View

IMPLEMENT_DYNCREATE(CAMFC92View, CView)

BEGIN_MESSAGE_MAP(CAMFC92View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CAMFC92View ����/����

CAMFC92View::CAMFC92View()
{
	// TODO: �ڴ˴���ӹ������

}

CAMFC92View::~CAMFC92View()
{
}

BOOL CAMFC92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CAMFC92View ����

void CAMFC92View::OnDraw(CDC* /*pDC*/)
{
	CAMFC92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CAMFC92View ���

#ifdef _DEBUG
void CAMFC92View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC92Doc* CAMFC92View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC92Doc)));
	return (CAMFC92Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC92View ��Ϣ�������


void CAMFC92View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CClientDC dc(this);
	int x1 = 300;  int x2 = 700;
	int y1 = 200;  int y2 = 400;
	for (int i = 1; i <= 6; i++)
	{
		CPen pen(PS_SOLID, 1, RGB(200 - i * 20, 150 - i * 6, i * 14));
		CPen* pOldPen = dc.SelectObject(&pen);
		CRect m_crect(x1 +i * 15, y1 + i * 10, x2 - i * 15, y2- i * 10);
		dc.Ellipse(m_crect);
		dc.SelectObject(pOldPen);
	}

}
