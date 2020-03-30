
// example6View.cpp : Cexample6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example6.h"
#endif

#include "example6Doc.h"
#include "example6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample6View

IMPLEMENT_DYNCREATE(Cexample6View, CView)

BEGIN_MESSAGE_MAP(Cexample6View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cexample6View::OnFileOpen)
END_MESSAGE_MAP()

// Cexample6View ����/����

Cexample6View::Cexample6View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample6View::~Cexample6View()
{
}

BOOL Cexample6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample6View ����

void Cexample6View::OnDraw(CDC* pDC)
{
	Cexample6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// Cexample6View ���

#ifdef _DEBUG
void Cexample6View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample6Doc* Cexample6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample6Doc)));
	return (Cexample6Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample6View ��Ϣ�������


void Cexample6View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
		CDC *pDC;
		pDC = GetDC();    //�õ��Ի�����豸����
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);//�õ���Ի����豸��������ݵ��ڴ�DC
		CFileDialog cfd(true); 
	int r = cfd.DoModal(); 
		
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
