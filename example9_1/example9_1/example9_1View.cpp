
// example9_1View.cpp : Cexample9_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example9_1.h"
#endif

#include "example9_1Doc.h"
#include "example9_1View.h"
#include "MyDlg.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample9_1View

IMPLEMENT_DYNCREATE(Cexample9_1View, CView)

BEGIN_MESSAGE_MAP(Cexample9_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Push, &Cexample9_1View::OnPush)
END_MESSAGE_MAP()

// Cexample9_1View 构造/析构

Cexample9_1View::Cexample9_1View()
{
	// TODO: 在此处添加构造代码
	s = "";
}

Cexample9_1View::~Cexample9_1View()
{
}

BOOL Cexample9_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample9_1View 绘制

void Cexample9_1View::OnDraw(CDC* /*pDC*/)
{
	Cexample9_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexample9_1View 诊断

#ifdef _DEBUG
void Cexample9_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample9_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample9_1Doc* Cexample9_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample9_1Doc)));
	return (Cexample9_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample9_1View 消息处理程序


void Cexample9_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
	GetDC()->TextOutW(200, 200, dlg.x);	
	}
	s = dlg.x;
	CView::OnLButtonDblClk(nFlags, point);
}


void Cexample9_1View::OnPush()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg2 dlg;
	int r = dlg.DoModal();
	dlg.put = s;
	SetDlgItemTextW(IDC_EDIT2, s);
	if (r == IDOK)
	{
	}
	
}
