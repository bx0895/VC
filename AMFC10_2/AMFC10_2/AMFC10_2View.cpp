
// AMFC10_2View.cpp : CAMFC10_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CAMFC10_2View 构造/析构

CAMFC10_2View::CAMFC10_2View()
	: CRecordView(IDD_AMFC10_2_FORM)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC10_2View::~CAMFC10_2View()
{
}

void CAMFC10_2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
}

BOOL CAMFC10_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC10_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC10_2Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC10_2View 诊断

#ifdef _DEBUG
void CAMFC10_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC10_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC10_2Doc* CAMFC10_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC10_2Doc)));
	return (CAMFC10_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC10_2View 数据库支持
CRecordset* CAMFC10_2View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC10_2View 消息处理程序
