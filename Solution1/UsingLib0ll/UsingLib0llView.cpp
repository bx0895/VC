
// UsingLib0llView.cpp : CUsingLib0llView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLib0ll.h"
#endif

#include "UsingLib0llDoc.h"
#include "UsingLib0llView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"W32D.h"
// CUsingLib0llView

IMPLEMENT_DYNCREATE(CUsingLib0llView, CView)

BEGIN_MESSAGE_MAP(CUsingLib0llView, CView)
END_MESSAGE_MAP()

// CUsingLib0llView ����/����

CUsingLib0llView::CUsingLib0llView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLib0llView::~CUsingLib0llView()
{
}

BOOL CUsingLib0llView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLib0llView ����

void CUsingLib0llView::OnDraw(CDC* pDC)
{
	CUsingLib0llDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
		s= CString(pchar());
		pDC->TextOutW(200, 200, s);
		CString ss;
		ss.Format(_T("%d,���ǴӶ�̬�ⷵ�ص�ֵ��"),GetInt());
		pDC->TextOutW(200, 250, ss);
	
}


// CUsingLib0llView ���

#ifdef _DEBUG
void CUsingLib0llView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLib0llView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLib0llDoc* CUsingLib0llView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLib0llDoc)));
	return (CUsingLib0llDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLib0llView ��Ϣ�������
