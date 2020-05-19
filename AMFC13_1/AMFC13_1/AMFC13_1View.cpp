
// AMFC13_1View.cpp : CAMFC13_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CAMFC13_1View 构造/析构

CAMFC13_1View::CAMFC13_1View()
	: CRecordView(IDD_AMFC13_1_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC13_1View::~CAMFC13_1View()
{
}

void CAMFC13_1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CAMFC13_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC13_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC13_1Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC13_1View 诊断

#ifdef _DEBUG
void CAMFC13_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC13_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC13_1Doc* CAMFC13_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC13_1Doc)));
	return (CAMFC13_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC13_1View 数据库支持
CRecordset* CAMFC13_1View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC13_1View 消息处理程序


void CAMFC13_1View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
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
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}
