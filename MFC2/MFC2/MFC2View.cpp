
// MFC2View.cpp : CMFC2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC2.h"
#endif

#include "MFC2Doc.h"
#include "MFC2View.h"
#include "Mydlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC2View

IMPLEMENT_DYNCREATE(CMFC2View, CView)

BEGIN_MESSAGE_MAP(CMFC2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_Color, &CMFC2View::OnColor)
END_MESSAGE_MAP()

// CMFC2View ����/����

CMFC2View::CMFC2View()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 200;
	cr.left = 300;
	cr.bottom = 350;
	cr.right = 500;
	
}

CMFC2View::~CMFC2View()
{
}

BOOL CMFC2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC2View ����

void CMFC2View::OnDraw(CDC* pDC)
{
	CMFC2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(cr);
}


// CMFC2View ���

#ifdef _DEBUG
void CMFC2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC2Doc* CMFC2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC2Doc)));
	return (CMFC2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC2View ��Ϣ�������


void CMFC2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CBrush *pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));
	CBrush *pOldBrush = dc.SelectObject(pBrush);
	CPen cpen(PS_DASH, 1, RGB(0, 0, 0));
	CPen* pOldPen = dc.SelectObject(&cpen);
	dc.Rectangle(cr);
	dc.SelectObject(pOldBrush);
	CView::OnLButtonDown(nFlags, point);
}


void CMFC2View::OnColor()
{
	// TODO: �ڴ���������������
	Mydlg dlg = new Mydlg();
	int r = dlg.DoModal();
	if (r == IDOK);
	{
		CClientDC dc(this);
		CBrush brush(RGB(dlg.r, dlg.g, dlg.b));
		CBrush* oldBr = dc.SelectObject(&brush);
		dc.Ellipse(cr);
		dc.SelectObject(oldBr);
	}
}
