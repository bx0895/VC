
// example5_1View.cpp : Cexample5_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example5_1.h"
#endif

#include "example5_1Doc.h"
#include "example5_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample5_1View

IMPLEMENT_DYNCREATE(Cexample5_1View, CView)

BEGIN_MESSAGE_MAP(Cexample5_1View, CView)
	ON_COMMAND(ID_ShowName, &Cexample5_1View::OnShowname)
END_MESSAGE_MAP()

// Cexample5_1View 构造/析构

Cexample5_1View::Cexample5_1View()
{
	// TODO: 在此处添加构造代码

}

Cexample5_1View::~Cexample5_1View()
{
}

BOOL Cexample5_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample5_1View 绘制

void Cexample5_1View::OnDraw(CDC* /*pDC*/)
{
	Cexample5_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexample5_1View 诊断

#ifdef _DEBUG
void Cexample5_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample5_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample5_1Doc* Cexample5_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample5_1Doc)));
	return (Cexample5_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample5_1View 消息处理程序


void Cexample5_1View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	dc.TextOutW(300, 200, _T("欧阳涤"));
}
