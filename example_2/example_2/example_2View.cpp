
// example_2View.cpp : Cexample_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example_2.h"
#endif

#include "example_2Doc.h"
#include "example_2View.h"
#include "Mdilog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_2View

IMPLEMENT_DYNCREATE(Cexample_2View, CView)

BEGIN_MESSAGE_MAP(Cexample_2View, CView)
	ON_BN_CLICKED(IDC_BUTTON1, &Cexample_2View::OnBnClickedButton1)
	ON_COMMAND(ID_PutOn, &Cexample_2View::OnPuton)
END_MESSAGE_MAP()

// Cexample_2View ����/����

Cexample_2View::Cexample_2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample_2View::~Cexample_2View()
{
}

BOOL Cexample_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample_2View ����

void Cexample_2View::OnDraw(CDC* /*pDC*/)
{
	Cexample_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexample_2View ���

#ifdef _DEBUG
void Cexample_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_2Doc* Cexample_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_2Doc)));
	return (Cexample_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_2View ��Ϣ�������


void Cexample_2View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Cexample_2View::OnPuton()
{
	// TODO: �ڴ���������������
	Mdilog *pd = new Mdilog();
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
}
