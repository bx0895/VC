
// example_4View.cpp : Cexample_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example_4.h"
#endif

#include "example_4Doc.h"
#include "example_4View.h"
#include "Mydlog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_4View

IMPLEMENT_DYNCREATE(Cexample_4View, CView)

BEGIN_MESSAGE_MAP(Cexample_4View, CView)
END_MESSAGE_MAP()

// Cexample_4View ����/����

Cexample_4View::Cexample_4View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample_4View::~Cexample_4View()
{
}

BOOL Cexample_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample_4View ����

void Cexample_4View::OnDraw(CDC* pDC)
{
	Cexample_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	Mydlog *pd = new Mydlog();
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
}


// Cexample_4View ���

#ifdef _DEBUG
void Cexample_4View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_4Doc* Cexample_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_4Doc)));
	return (Cexample_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_4View ��Ϣ�������
