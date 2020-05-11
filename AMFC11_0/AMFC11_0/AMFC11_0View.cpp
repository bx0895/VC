
// AMFC11_0View.cpp : CAMFC11_0View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CAMFC11_0View 构造/析构

CAMFC11_0View::CAMFC11_0View()
	: CRecordView(IDD_AMFC11_0_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC11_0View::~CAMFC11_0View()
{
}

void CAMFC11_0View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CAMFC11_0View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC11_0View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC11_0Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC11_0View 诊断

#ifdef _DEBUG
void CAMFC11_0View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC11_0View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC11_0Doc* CAMFC11_0View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC11_0Doc)));
	return (CAMFC11_0Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC11_0View 数据库支持
CRecordset* CAMFC11_0View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC11_0View 消息处理程序
