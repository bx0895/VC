
// AMFC10_2View.cpp : CAMFC10_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC10_2.h"
#endif

#include "AMFC10_2Set.h"
#include "AMFC10_2Doc.h"
#include "AMFC10_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC10_2View

IMPLEMENT_DYNCREATE(CAMFC10_2View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC10_2View, CRecordView)
END_MESSAGE_MAP()

// CAMFC10_2View ����/����

CAMFC10_2View::CAMFC10_2View()
	: CRecordView(IDD_AMFC10_2_FORM)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CAMFC10_2View::~CAMFC10_2View()
{
}

void CAMFC10_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
}

BOOL CAMFC10_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC10_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC10_2Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC10_2View ���

#ifdef _DEBUG
void CAMFC10_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC10_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC10_2Doc* CAMFC10_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC10_2Doc)));
	return (CAMFC10_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC10_2View ���ݿ�֧��
CRecordset* CAMFC10_2View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC10_2View ��Ϣ�������
