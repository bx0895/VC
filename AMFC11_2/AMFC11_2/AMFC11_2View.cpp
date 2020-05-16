
// AMFC11_2View.cpp : CAMFC11_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC11_2.h"
#endif

#include "AMFC11_2Set.h"
#include "AMFC11_2Doc.h"
#include "AMFC11_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC11_2View

IMPLEMENT_DYNCREATE(CAMFC11_2View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC11_2View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CAMFC11_2View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CAMFC11_2View 构造/析构

CAMFC11_2View::CAMFC11_2View()
	: CRecordView(IDD_AMFC11_2_FORM)
	, ID(0)
	, name(_T(""))
	, number(0)
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC11_2View::~CAMFC11_2View()
{
}

void CAMFC11_2View::DoDataExchange(CDataExchange* pDX)
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
}

BOOL CAMFC11_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC11_2View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC11_2Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC11_2View 诊断

#ifdef _DEBUG
void CAMFC11_2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC11_2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC11_2Doc* CAMFC11_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC11_2Doc)));
	return (CAMFC11_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC11_2View 数据库支持
CRecordset* CAMFC11_2View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC11_2View 消息处理程序


void CAMFC11_2View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	CImage img;
	img.Load(m_pSet->m_4);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();

	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		x = (rect.Width() - w) / 2;
		y = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		x = 0;
		y = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, x, y, w, h);
	ReleaseDC(pDC);
}
