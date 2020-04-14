
// example_1View.cpp : Cexample_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example_1.h"
#endif

#include "example_1Doc.h"
#include "example_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_1View

IMPLEMENT_DYNCREATE(Cexample_1View, CView)

BEGIN_MESSAGE_MAP(Cexample_1View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample_1View 构造/析构

Cexample_1View::Cexample_1View()
{
	// TODO: 在此处添加构造代码
	cr.left = 300;
	cr.right = 450;
	cr.top = 200;
	cr.bottom = 300;
	a = 0;
}

Cexample_1View::~Cexample_1View()
{
}

BOOL Cexample_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample_1View 绘制

void Cexample_1View::OnDraw(CDC* pDC)
{
	Cexample_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(cr);
}


// Cexample_1View 诊断

#ifdef _DEBUG
void Cexample_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_1Doc* Cexample_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_1Doc)));
	return (Cexample_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_1View 消息处理程序


void Cexample_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (a == 1)
	{
	cr.left = point.x;
	cr.top = point.y;
	cr.right = point.x + 150;
	cr.bottom = point.y + 100;
	dc.Rectangle(cr);
	Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void Cexample_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	a = 1;
	

	CView::OnLButtonDown(nFlags, point);
}


void Cexample_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	a = 0;
	CView::OnLButtonUp(nFlags, point);
}
