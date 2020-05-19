
// AMFC13_1View.cpp : CAMFC13_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC13_1.h"
#endif

#include "AMFC13_1Set.h"
#include "AMFC13_1Doc.h"
#include "AMFC13_1View.h"
#include "ADD_dlg.h"
#include "Alter_dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC13_1View

IMPLEMENT_DYNCREATE(CAMFC13_1View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC13_1View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON2, &CAMFC13_1View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CAMFC13_1View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CAMFC13_1View::OnBnClickedButton3)
END_MESSAGE_MAP()

// CAMFC13_1View ����/����

CAMFC13_1View::CAMFC13_1View()
	: CRecordView(IDD_AMFC13_1_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CAMFC13_1View::~CAMFC13_1View()
{
}

void CAMFC13_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CAMFC13_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC13_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC13_1Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC13_1View ���

#ifdef _DEBUG
void CAMFC13_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC13_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC13_1Doc* CAMFC13_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC13_1Doc)));
	return (CAMFC13_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC13_1View ���ݿ�֧��
CRecordset* CAMFC13_1View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC13_1View ��Ϣ�������


void CAMFC13_1View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Alter_dlg dlg;
	dlg.x = m_pSet->m_1;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		long i = dlg.x;
		m_pSet->Edit();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CAMFC13_1View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_dlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		long i = dlg.num;
		m_pSet->AddNew();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CAMFC13_1View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}
