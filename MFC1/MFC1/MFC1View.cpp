
// MFC1View.cpp : CMFC1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC1.h"
#endif

#include "MFC1Doc.h"
#include "MFC1View.h"
#include "Mydlg1.h"
#include "Mydlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC1View

IMPLEMENT_DYNCREATE(CMFC1View, CView)

BEGIN_MESSAGE_MAP(CMFC1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_Size, &CMFC1View::OnSize)
	ON_COMMAND(ID_Color, &CMFC1View::OnColor)
END_MESSAGE_MAP()

// CMFC1View ����/����

CMFC1View::CMFC1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.top = 0;
	cr.left = 0;
	cr.bottom = 0;
	cr.right = 0;
	set = false;
	x=50;
	y = 100;
	z = 200;
}

CMFC1View::~CMFC1View()
{
}

BOOL CMFC1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC1View ����

void CMFC1View::OnDraw(CDC* pDC)
{
	CMFC1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CPen pen(PS_SOLID, 1, RGB(x,y,z));
	CPen* pOldPen = pDC->SelectObject(&pen);
	pDC->Ellipse(cr);
}


// CMFC1View ���

#ifdef _DEBUG
void CMFC1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC1Doc* CMFC1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC1Doc)));
	return (CMFC1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC1View ��Ϣ�������


void CMFC1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = point.x;
	cr.top = point.y;
	set = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (set)
	{
    cr.right = point.x;
	cr.bottom = point.y;
	x++;
	y++;
	z--;
	Invalidate();
	}
	
	CView::OnMouseMove(nFlags, point);
}


void CMFC1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	set = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC1View::OnSize()
{
	// TODO: �ڴ���������������
	Mydlg1 dlg1 = new Mydlg1;
	int r = dlg1.DoModal();
	if (r == IDOK)
	{
		cr.top = dlg1.T;
		cr.bottom = dlg1.B;
		cr.left = dlg1.L;
		cr.right = dlg1.R;
		Invalidate();
	}
}


void CMFC1View::OnColor()
{
	// TODO: �ڴ���������������
}
