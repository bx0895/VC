
// example2View.cpp : Cexample2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example2.h"
#endif

#include "example2Doc.h"
#include "example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample2View

IMPLEMENT_DYNCREATE(Cexample2View, CView)

BEGIN_MESSAGE_MAP(Cexample2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample2View ����/����

Cexample2View::Cexample2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample2View::~Cexample2View()
{
}

BOOL Cexample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample2View ����

void Cexample2View::OnDraw(CDC* pDC)
{
	Cexample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// Cexample2View ���

#ifdef _DEBUG
void Cexample2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample2Doc* Cexample2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample2Doc)));
	return (Cexample2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample2View ��Ϣ�������


void Cexample2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�����������");

	Cexample2Doc* pDoc = GetDocument();
	CString Sum;
	Sum.Format(_T("A+B=%d"), pDoc->sum);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	dc.TextOutW(300, 300, Sum);
    
	
	CView::OnLButtonDown(nFlags, point);
	
}


void Cexample2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s = _T("�������̧��");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
	
}
