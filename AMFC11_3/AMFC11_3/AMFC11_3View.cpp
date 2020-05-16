
// AMFC11_3View.cpp : CAMFC11_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC11_3.h"
#endif

#include "AMFC11_3Set.h"
#include "AMFC11_3Doc.h"
#include "AMFC11_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC11_3View

IMPLEMENT_DYNCREATE(CAMFC11_3View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC11_3View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CAMFC11_3View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CAMFC11_3View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CAMFC11_3View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CAMFC11_3View::OnRecordLast)
END_MESSAGE_MAP()

// CAMFC11_3View 构造/析构

CAMFC11_3View::CAMFC11_3View()
	: CRecordView(IDD_AMFC11_3_FORM)
	, ID(0)
	, name(_T(""))
	, number(0)
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC11_3View::~CAMFC11_3View()
{
}

void CAMFC11_3View::DoDataExchange(CDataExchange* pDX)
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

BOOL CAMFC11_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC11_3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC11_3Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC11_3View 诊断

#ifdef _DEBUG
void CAMFC11_3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC11_3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC11_3Doc* CAMFC11_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC11_3Doc)));
	return (CAMFC11_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC11_3View 数据库支持
CRecordset* CAMFC11_3View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC11_3View 消息处理程序

void CAMFC11_3View::draw_pic(CString str)
{
	
	CImage img;
	img.Load(str);
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


void CAMFC11_3View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	draw_pic(m_pSet->m_4);
}


void CAMFC11_3View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	draw_pic(m_pSet->m_4);
}


void CAMFC11_3View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if(m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	draw_pic(m_pSet->m_4);
}


void CAMFC11_3View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	draw_pic(m_pSet->m_4);
}
