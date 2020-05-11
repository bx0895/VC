
// AMFC11_0View.cpp : CAMFC11_0View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC11_0.h"
#endif

#include "AMFC11_0Set.h"
#include "AMFC11_0Doc.h"
#include "AMFC11_0View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC11_0View

IMPLEMENT_DYNCREATE(CAMFC11_0View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC11_0View, CRecordView)
END_MESSAGE_MAP()

// CAMFC11_0View ����/����

CAMFC11_0View::CAMFC11_0View()
	: CRecordView(IDD_AMFC11_0_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CAMFC11_0View::~CAMFC11_0View()
{
}

void CAMFC11_0View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CAMFC11_0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC11_0View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC11_0Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC11_0View ���

#ifdef _DEBUG
void CAMFC11_0View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC11_0View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC11_0Doc* CAMFC11_0View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC11_0Doc)));
	return (CAMFC11_0Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC11_0View ���ݿ�֧��
CRecordset* CAMFC11_0View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC11_0View ��Ϣ�������
