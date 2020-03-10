
// example2.3View.cpp : Cexample23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example2.3.h"
#endif

#include "example2.3Doc.h"
#include "example2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample23View

IMPLEMENT_DYNCREATE(Cexample23View, CView)

BEGIN_MESSAGE_MAP(Cexample23View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample23View 构造/析构

Cexample23View::Cexample23View()
{
	// TODO: 在此处添加构造代码

}

Cexample23View::~Cexample23View()
{
}

BOOL Cexample23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample23View 绘制

void Cexample23View::OnDraw(CDC* pDC)
{
	Cexample23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	CRect A(100, 150, 300, 300);
	CRect B(400, 300, 550, 400);
	CRect C(700, 300, 900, 450);
	CClientDC dc(this);
	dc.Rectangle(A);
	dc.Rectangle(B);
	dc.Rectangle(C);
}


// Cexample23View 诊断

#ifdef _DEBUG
void Cexample23View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample23Doc* Cexample23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample23Doc)));
	return (Cexample23Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample23View 消息处理程序


void Cexample23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	Cexample23Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if(point.x>100&&point.x<300&&point.y>150&&point.y<300)
	{
		
		CString s;
		s.Format(_T("%d"), pDoc->a);
		dc.TextOutW(175, 235, s);
	}
	else if (point.x > 400 && point.x < 550 && point.y>300 && point.y < 400)
	{
		CString s;
		s.Format(_T("%d"), pDoc->b);
		dc.TextOutW(470, 350, s);
	}
	else
	{
		CString s=_T("点击无效");
		dc.TextOutW(600, 100, s);
	}

	CView::OnLButtonDown(nFlags, point);
}


void Cexample23View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (point.x>700&& point.x<900 && point.y>300 && point.y<450)
	{
		Cexample23Doc* pDoc = GetDocument();
		CString s;
		s.Format(_T("%d"), pDoc->c);
		CClientDC dc(this);
		dc.TextOutW(800, 375, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
