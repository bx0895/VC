
// example1View.cpp : Cexample1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example1.h"
#endif

#include "example1Doc.h"
#include "example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample1View

IMPLEMENT_DYNCREATE(Cexample1View, CView)

BEGIN_MESSAGE_MAP(Cexample1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample1View ����/����

Cexample1View::Cexample1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample1View::~Cexample1View()
{
}

BOOL Cexample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample1View ����

void Cexample1View::OnDraw(CDC* pDC)
{
	Cexample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	/*
	int a = pDoc->A;
	CString Str;
	Str.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(200, 250, Str);
	*/

	
	CString s=_T("����xxx");
	int A = 3;
	CString Str;
	Str.Format(_T("%d"), A);
	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(200, 250, Str);
	

}


// Cexample1View ��ӡ

BOOL Cexample1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cexample1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cexample1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cexample1View ���

#ifdef _DEBUG
void Cexample1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample1Doc* Cexample1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample1Doc)));
	return (Cexample1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample1View ��Ϣ�������


void Cexample1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample1Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(300,300,s);
	CView::OnRButtonDown(nFlags, point);
}
