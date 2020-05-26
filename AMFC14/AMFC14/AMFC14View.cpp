
// AMFC14View.cpp : CAMFC14View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC14.h"
#endif

#include "AMFC14Set.h"
#include "AMFC14Doc.h"
#include "AMFC14View.h"
#include"Dlg_picture.h"
#include"Dlg_Add.h"
#include"Dlg_Search.h"
#include"Dlg_Record.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC14View

IMPLEMENT_DYNCREATE(CAMFC14View, CRecordView)

BEGIN_MESSAGE_MAP(CAMFC14View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT3, &CAMFC14View::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &CAMFC14View::OnShowPicture)
//	ON_WM_PAINT()
ON_COMMAND(ID_RECORD_FIRST, &CAMFC14View::OnRecordFirst)
ON_COMMAND(ID_RECORD_PREV, &CAMFC14View::OnRecordPrev)
ON_COMMAND(ID_RECORD_NEXT, &CAMFC14View::OnRecordNext)
ON_COMMAND(ID_RECORD_LAST, &CAMFC14View::OnRecordLast)
ON_WM_PAINT()
ON_COMMAND(ID_Add, &CAMFC14View::OnAdd)
ON_COMMAND(ID_Alter, &CAMFC14View::OnAlter)
ON_COMMAND(ID_Delete, &CAMFC14View::OnDelete)
ON_COMMAND(ID_Search, &CAMFC14View::OnSearch)
ON_COMMAND(ID_Rank, &CAMFC14View::OnRank)
ON_COMMAND(ID_Record, &CAMFC14View::OnRecord)
END_MESSAGE_MAP()

// CAMFC14View 构造/析构

CAMFC14View::CAMFC14View()
	: CRecordView(IDD_AMFC14_FORM)
	, name(_T(""))
	, studentno(_T(""))
	, subject(_T(""))
	, sex(_T(""))
	, age(_T(""))
	, phone(_T(""))
	, address(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	

}

CAMFC14View::~CAMFC14View()
{
}

void CAMFC14View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL CAMFC14View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CAMFC14View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_AMFC14Set;
	CRecordView::OnInitialUpdate();

}


// CAMFC14View 诊断

#ifdef _DEBUG
void CAMFC14View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CAMFC14View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CAMFC14Doc* CAMFC14View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC14Doc)));
	return (CAMFC14Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC14View 数据库支持
CRecordset* CAMFC14View::OnGetRecordset()
{
	return m_pSet;
}



// CAMFC14View 消息处理程序


void CAMFC14View::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CAMFC14View::OnShowPicture()
{
	// TODO: 在此添加控件通知处理程序代码
	Dlg_picture dlg;
	dlg.filename = m_pSet->column8;
	int r = dlg.DoModal();
	if (r == IDOK) 
	{
	}
}

void CAMFC14View::draw_pic(CString str)
{

	CImage img;
	img.Load(str);
	CDC* pDC = GetDlgItem(IDC_STATIC1)->GetDC();
	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);

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



void CAMFC14View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	//draw_pic(m_pSet->column8);
}


void CAMFC14View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate();
	//draw_pic(m_pSet->column8);
}


void CAMFC14View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	//draw_pic(m_pSet->column8);
}


void CAMFC14View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate();
	//draw_pic(m_pSet->column8);
}


void CAMFC14View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	draw_pic(m_pSet->column8);
	
}


void CAMFC14View::OnAdd()
{
	// TODO: 在此添加命令处理程序代码
	Dlg_Add dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->column1 = dlg.name;
		m_pSet->column2 = dlg.number;
		m_pSet->column3 = dlg.subject;
		m_pSet->column4 = dlg.sex;
		m_pSet->column5 = dlg.age;
		m_pSet->column6 = dlg.phone;
		m_pSet->column7 = dlg.address;
		m_pSet->column8 = dlg.picture;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CAMFC14View::OnAlter()
{
	// TODO: 在此添加命令处理程序代码
	Dlg_Add dlg;
	dlg.name = m_pSet->column1;
	dlg.number= m_pSet->column2;
	dlg.subject= m_pSet->column3;
	dlg.sex= m_pSet->column4;
	dlg.age= m_pSet->column5;
	dlg.phone= m_pSet->column6;
	dlg.address= m_pSet->column7;
	dlg.picture= m_pSet->column8;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->column1 = dlg.name;
		m_pSet->column2 = dlg.number;
		m_pSet->column3 = dlg.subject;
		m_pSet->column4 = dlg.sex;
		m_pSet->column5 = dlg.age;
		m_pSet->column6 = dlg.phone;
		m_pSet->column7 = dlg.address;
		m_pSet->column8 = dlg.picture;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CAMFC14View::OnDelete()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CAMFC14View::OnSearch()
{
	// TODO: 在此添加命令处理程序代码
	Dlg_Search dlg;
	if (dlg.DoModal() == IDOK)
	{
     dlg.message.TrimLeft();
    if (dlg.message.IsEmpty())
	{
		MessageBox(_T("要查询的内容不能为空！")); return;
	}
	if (m_pSet->IsOpen())
		m_pSet->Close();
	m_pSet->m_strFilter.Format(dlg.message);
	m_pSet->Open();
	if (!m_pSet->IsEOF())
		UpdateData(false);
	else
		MessageBox(_T("没有你想要查询的记录！"));
	}
	
}


void CAMFC14View::OnRank()
{
	// TODO: 在此添加命令处理程序代码
	Dlg_Search dlg;
	if (dlg.DoModal() == IDOK)
	{
		dlg.message.TrimLeft();
		if (dlg.message.IsEmpty())
		{
			MessageBox(_T("要排序的内容不能为空！")); return;
		}
		if (m_pSet->IsOpen())
			m_pSet->Close();
		m_pSet->m_strSort.Format(dlg.message);
		m_pSet->Open();
		if (!m_pSet->IsEOF())
			UpdateData(false);
	}
}


void CAMFC14View::OnRecord()
{
	// TODO: 在此添加命令处理程序代码
	Dlg_Record dlg;
	
	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())
	{
		CString s;
		for (int i = 0; i < m_pSet->GetODBCFieldCount(); i++)
		{   CString str;
			m_pSet->GetFieldValue((short)i, str);
			s += str;
		}
		dlg.str.Add(s);
		m_pSet->MoveNext();
	}
	if (dlg.DoModal())
	{

	}
}
