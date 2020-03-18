
// example3_3View.cpp : Cexample3_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example3_3.h"
#endif

#include "example3_3Doc.h"
#include "example3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_3View

IMPLEMENT_DYNCREATE(Cexample3_3View, CView)

BEGIN_MESSAGE_MAP(Cexample3_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexample3_3View 构造/析构

Cexample3_3View::Cexample3_3View()
{
	// TODO: 在此处添加构造代码
	set = true;
	T = true;
}

Cexample3_3View::~Cexample3_3View()
{
}

BOOL Cexample3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample3_3View 绘制

void Cexample3_3View::OnDraw(CDC* pDC)
{
	Cexample3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		SetTimer(1, 500, NULL);
		set = false;
	}

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->cr);
}


// Cexample3_3View 诊断

#ifdef _DEBUG
void Cexample3_3View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_3Doc* Cexample3_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_3Doc)));
	return (Cexample3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_3View 消息处理程序


void Cexample3_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3_3Doc* pDoc = GetDocument();
	CRect crect;
	GetClientRect(&crect);
	int n;
	if (pDoc->cr.bottom < crect.bottom)
	{

		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
		InvalidateRect(NULL, TRUE);
	}
	else
	{
		pDoc->cr.top -= 10;
		pDoc->cr.bottom -= 10;
	}

	InvalidateRect(NULL, TRUE);
	CView::OnTimer(nIDEvent);
}
