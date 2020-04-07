
// example8View.cpp : Cexample8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example8.h"
#endif

#include "example8Doc.h"
#include "example8View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample8View

IMPLEMENT_DYNCREATE(Cexample8View, CView)

BEGIN_MESSAGE_MAP(Cexample8View, CView)
	ON_COMMAND(ID_Puout, &Cexample8View::OnPuout)
	ON_COMMAND(ID_Close, &Cexample8View::OnClose)
END_MESSAGE_MAP()

// Cexample8View ����/����

Cexample8View::Cexample8View()
{
	// TODO: �ڴ˴���ӹ������
	show = 1;
	
}

Cexample8View::~Cexample8View()
{
}

BOOL Cexample8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample8View ����

void Cexample8View::OnDraw(CDC* pDC)
{
	Cexample8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (show == 0)
	{
		pDC->TextOutW(200,200,_T("�����˳��Ի���"));
	}
}


// Cexample8View ���

#ifdef _DEBUG
void Cexample8View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample8Doc* Cexample8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample8Doc)));
	return (Cexample8Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample8View ��Ϣ�������


void Cexample8View::OnPuout()
{
	// TODO: �ڴ���������������
	MyDialog *pd= new MyDialog;
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
	show = 1;
}


void Cexample8View::OnClose()
{
	// TODO: �ڴ���������������
	MyDialog *pd = new MyDialog;
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(0);
	show = 0;
}
