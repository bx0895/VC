
// AMFC9_1View.cpp : CAMFC9_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC9_1.h"
#endif

#include "fstream"
#include "iostream"
#include "string"
#include "Mydlg.h"

using namespace std;
#include "AMFC9_1Doc.h"
#include "AMFC9_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC9_1View

IMPLEMENT_DYNCREATE(CAMFC9_1View, CView)

BEGIN_MESSAGE_MAP(CAMFC9_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CAMFC9_1View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CAMFC9_1View::OnFileSaveAs)
	ON_COMMAND(ID_Pop, &CAMFC9_1View::OnPop)
END_MESSAGE_MAP()

// CAMFC9_1View ����/����

CAMFC9_1View::CAMFC9_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CAMFC9_1View::~CAMFC9_1View()
{
}

BOOL CAMFC9_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CAMFC9_1View ����

void CAMFC9_1View::OnDraw(CDC* /*pDC*/)
{
	CAMFC9_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CAMFC9_1View ���

#ifdef _DEBUG
void CAMFC9_1View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC9_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC9_1Doc* CAMFC9_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC9_1Doc)));
	return (CAMFC9_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC9_1View ��Ϣ�������


void CAMFC9_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	
	CString filename;
	CFileDialog file(true);
	int r = file.DoModal();
	if (r == IDOK)
	{
		filename = file.GetPathName();
		ofstream ofs("D:\\abc.txt",ios::out);
		std::string s(CW2A(filename.GetString()));
		ofs << s<<endl;
		
	}
}


void CAMFC9_1View::OnFileSaveAs()
{
	// TODO: �ڴ���������������

}


void CAMFC9_1View::OnPop()
{
	// TODO: �ڴ���������������
	Mydlg dlg = new Mydlg();
	int r = dlg.DoModal();
	if (r == IDOK)
	{
	}
}
