
// example9_1View.cpp : Cexample9_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example9_1.h"
#endif

#include "example9_1Doc.h"
#include "example9_1View.h"
#include "MyDlg.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample9_1View

IMPLEMENT_DYNCREATE(Cexample9_1View, CView)

BEGIN_MESSAGE_MAP(Cexample9_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Push, &Cexample9_1View::OnPush)
END_MESSAGE_MAP()

// Cexample9_1View ����/����

Cexample9_1View::Cexample9_1View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
}

Cexample9_1View::~Cexample9_1View()
{
}

BOOL Cexample9_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample9_1View ����

void Cexample9_1View::OnDraw(CDC* /*pDC*/)
{
	Cexample9_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexample9_1View ���

#ifdef _DEBUG
void Cexample9_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample9_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample9_1Doc* Cexample9_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample9_1Doc)));
	return (Cexample9_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample9_1View ��Ϣ�������


void Cexample9_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
	GetDC()->TextOutW(200, 200, dlg.x);	
	}
	s = dlg.x;
	CView::OnLButtonDblClk(nFlags, point);
}


void Cexample9_1View::OnPush()
{
	// TODO: �ڴ���������������
	MyDlg2 dlg;
	int r = dlg.DoModal();
	dlg.put = s;
	SetDlgItemTextW(IDC_EDIT2, s);
	if (r == IDOK)
	{
	}
	
}
