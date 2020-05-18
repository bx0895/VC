
// AMFC12_1View.cpp : CAMFC12_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC12_1.h"
#endif

#include "AMFC12_1Set.h"
#include "AMFC12_1Doc.h"
#include "AMFC12_1View.h"
#include "Mag.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC12_1View

IMPLEMENT_DYNCREATE(CAMFC12_1View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC12_1View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &CAMFC12_1View::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &CAMFC12_1View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CAMFC12_1View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CAMFC12_1View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CAMFC12_1View::OnRecordLast)
END_MESSAGE_MAP()

// CAMFC12_1View 构造/析构

CAMFC12_1View::CAMFC12_1View()
	: CRecordView(IDD_AMFC12_1_FORM)
	, ID(0)
	, name(_T(""))
	, number(0)
	, subjuct(_T(""))
	, birth(_T(""))
	, address(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CAMFC12_1View::~CAMFC12_1View()
{
}

void CAMFC12_1View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
}

BOOL CAMFC12_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC12_1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC12_1Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC12_1View 诊断

#ifdef _DEBUG
void CAMFC12_1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC12_1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC12_1Doc* CAMFC12_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC12_1Doc)));
	return (CAMFC12_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC12_1View 数据库支持
CRecordset* CAMFC12_1View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC12_1View 消息处理程序


void CAMFC12_1View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CMag dlg;
	dlg.pathname = m_pSet->m_6;
	int r = dlg.DoModal(); 
	if (r == IDOK) 
	{
	}
}

void CAMFC12_1View::draw_pic(CString str)
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

void CAMFC12_1View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	draw_pic(m_pSet->m_6);
}


void CAMFC12_1View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	draw_pic(m_pSet->m_6);
}


void CAMFC12_1View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	draw_pic(m_pSet->m_6);
}


void CAMFC12_1View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	draw_pic(m_pSet->m_6);
}
