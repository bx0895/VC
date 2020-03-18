
// example3_1View.cpp : Cexample3_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example3_1.h"
#endif

#include "example3_1Doc.h"
#include "example3_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_1View

IMPLEMENT_DYNCREATE(Cexample3_1View, CView)

BEGIN_MESSAGE_MAP(Cexample3_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample3_1View 构造/析构

Cexample3_1View::Cexample3_1View()
{
	// TODO: 在此处添加构造代码

}

Cexample3_1View::~Cexample3_1View()
{
}

BOOL Cexample3_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample3_1View 绘制

void Cexample3_1View::OnDraw(CDC* pDC)
{
	Cexample3_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	CString c;
	s.Format(_T("相隔像素%d"), pDoc->x);
	c.Format(_T("发生次数%d"), pDoc->count);
	pDC->TextOutW(50, 50, c);
	pDC->TextOutW(200, 50, s);
	pDoc->count = 0;
	pDoc->x = 0;
}


// Cexample3_1View 诊断

#ifdef _DEBUG
void Cexample3_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_1Doc* Cexample3_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_1Doc)));
	return (Cexample3_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_1View 消息处理程序


void Cexample3_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3_1Doc* pDoc = GetDocument();
	pDoc->m_point.x = point.x;
	pDoc->m_point.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample3_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3_1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnMouseMove(nFlags, point);
}


void Cexample3_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	Cexample3_1Doc* pDoc = GetDocument();
	if(point.x>pDoc->m_point.x)
	pDoc->x = (point.x - pDoc->m_point.x)/ pDoc->count;
	else pDoc->x = ( pDoc->m_point.x- point.x) / pDoc->count;
	Invalidate(TRUE);
	CView::OnLButtonUp(nFlags, point);
}
