
// example2.1View.cpp : Cexample21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example2.1.h"
#endif

#include "example2.1Doc.h"
#include "example2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample21View

IMPLEMENT_DYNCREATE(Cexample21View, CView)

BEGIN_MESSAGE_MAP(Cexample21View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample21View 构造/析构

Cexample21View::Cexample21View()
{
	// TODO: 在此处添加构造代码

}

Cexample21View::~Cexample21View()
{
}

BOOL Cexample21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample21View 绘制

void Cexample21View::OnDraw(CDC* /*pDC*/)
{
	Cexample21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexample21View 诊断

#ifdef _DEBUG
void Cexample21View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample21Doc* Cexample21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample21Doc)));
	return (Cexample21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample21View 消息处理程序


void Cexample21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r;
	CRect cr;
	this->GetClientRect(&cr);
	if (cr.Height() < cr.Width())
	{
		r = cr.Height();
	}
	else { r = cr.Width(); }

	CRect a(0,0,r,r);
	this->GetClientRect(&a);
	CClientDC dc(this);
	dc.Ellipse(a);
	CView::OnLButtonDown(nFlags, point);
}
