
// example5_1View.cpp : Cexample5_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example5_1.h"
#endif

#include "example5_1Doc.h"
#include "example5_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample5_1View

IMPLEMENT_DYNCREATE(Cexample5_1View, CView)

BEGIN_MESSAGE_MAP(Cexample5_1View, CView)
	ON_COMMAND(ID_ShowName, &Cexample5_1View::OnShowname)
END_MESSAGE_MAP()

// Cexample5_1View ����/����

Cexample5_1View::Cexample5_1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample5_1View::~Cexample5_1View()
{
}

BOOL Cexample5_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample5_1View ����

void Cexample5_1View::OnDraw(CDC* /*pDC*/)
{
	Cexample5_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexample5_1View ���

#ifdef _DEBUG
void Cexample5_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample5_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample5_1Doc* Cexample5_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample5_1Doc)));
	return (Cexample5_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample5_1View ��Ϣ�������


void Cexample5_1View::OnShowname()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	dc.TextOutW(300, 200, _T("ŷ����"));
}
