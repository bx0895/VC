
// example3View.cpp : Cexample3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example3.h"
#endif

#include "example3Doc.h"
#include "example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3View

IMPLEMENT_DYNCREATE(Cexample3View, CView)

BEGIN_MESSAGE_MAP(Cexample3View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample3View 构造/析构

Cexample3View::Cexample3View()
{
	// TODO: 在此处添加构造代码

}

Cexample3View::~Cexample3View()
{
}

BOOL Cexample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample3View 绘制

void Cexample3View::OnDraw(CDC* pDC)
{
	Cexample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rc);
}


// Cexample3View 诊断

#ifdef _DEBUG
void Cexample3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3Doc* Cexample3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3Doc)));
	return (Cexample3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3View 消息处理程序


void Cexample3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3Doc* pDoc = GetDocument();
	CString c;
	c.Format(_T("X=%d Y=%d"),point.x,point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, c);
	CView::OnMouseMove(nFlags, point);
}


void Cexample3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3Doc* pDoc = GetDocument();
	pDoc->rc.left = point.x;
	pDoc->rc.top = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3Doc* pDoc = GetDocument();
	pDoc->rc.right = point.x;
	pDoc->rc.bottom = point.y;
	InvalidateRect(NULL, TRUE);//强制重绘
	CView::OnLButtonUp(nFlags, point);
}
