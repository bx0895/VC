
// example5_2View.cpp : Cexample5_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example5_2.h"
#endif

#include "example5_2Doc.h"
#include "example5_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample5_2View

IMPLEMENT_DYNCREATE(Cexample5_2View, CView)

BEGIN_MESSAGE_MAP(Cexample5_2View, CView)
END_MESSAGE_MAP()

// Cexample5_2View ����/����

Cexample5_2View::Cexample5_2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_Width = BM.bmWidth;
	m_Height = BM.bmHeight;
}

Cexample5_2View::~Cexample5_2View()
{
}

BOOL Cexample5_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample5_2View ����

void Cexample5_2View::OnDraw(CDC* pDC)
{
	Cexample5_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC DC;
	DC.CreateCompatibleDC(NULL);
	DC.SelectObject(m_Bitmap);
	pDC->BitBlt(300, 50, m_Width, m_Height, &DC, 0, 0, SRCCOPY);
}


// Cexample5_2View ���

#ifdef _DEBUG
void Cexample5_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample5_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample5_2Doc* Cexample5_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample5_2Doc)));
	return (Cexample5_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample5_2View ��Ϣ�������
