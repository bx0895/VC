
// example_2View.cpp : Cexample_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example_2.h"
#endif

#include "example_2Doc.h"
#include "example_2View.h"
#include "Mdilog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_2View

IMPLEMENT_DYNCREATE(Cexample_2View, CView)

BEGIN_MESSAGE_MAP(Cexample_2View, CView)
	ON_BN_CLICKED(IDC_BUTTON1, &Cexample_2View::OnBnClickedButton1)
	ON_COMMAND(ID_PutOn, &Cexample_2View::OnPuton)
END_MESSAGE_MAP()

// Cexample_2View 构造/析构

Cexample_2View::Cexample_2View()
{
	// TODO: 在此处添加构造代码

}

Cexample_2View::~Cexample_2View()
{
}

BOOL Cexample_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample_2View 绘制

void Cexample_2View::OnDraw(CDC* /*pDC*/)
{
	Cexample_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexample_2View 诊断

#ifdef _DEBUG
void Cexample_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_2Doc* Cexample_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_2Doc)));
	return (Cexample_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_2View 消息处理程序


void Cexample_2View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void Cexample_2View::OnPuton()
{
	// TODO: 在此添加命令处理程序代码
	Mdilog *pd = new Mdilog();
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
}
