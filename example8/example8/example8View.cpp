
// example8View.cpp : Cexample8View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example8.h"
#endif

#include "example8Doc.h"
#include "example8View.h"
#include"MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample8View

IMPLEMENT_DYNCREATE(Cexample8View, CView)

BEGIN_MESSAGE_MAP(Cexample8View, CView)
	ON_COMMAND(ID_Puout, &Cexample8View::OnPuout)
	ON_COMMAND(ID_Close, &Cexample8View::OnClose)
END_MESSAGE_MAP()

// Cexample8View 构造/析构

Cexample8View::Cexample8View()
{
	// TODO: 在此处添加构造代码
	show = 1;
	
}

Cexample8View::~Cexample8View()
{
}

BOOL Cexample8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample8View 绘制

void Cexample8View::OnDraw(CDC* pDC)
{
	Cexample8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (show == 0)
	{
		pDC->TextOutW(200,200,_T("你已退出对话框"));
	}
}


// Cexample8View 诊断

#ifdef _DEBUG
void Cexample8View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample8Doc* Cexample8View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample8Doc)));
	return (Cexample8Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample8View 消息处理程序


void Cexample8View::OnPuout()
{
	// TODO: 在此添加命令处理程序代码
	MyDialog *pd= new MyDialog;
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
	show = 1;
}


void Cexample8View::OnClose()
{
	// TODO: 在此添加命令处理程序代码
	MyDialog *pd = new MyDialog;
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(0);
	show = 0;
}
