
// example2View.cpp : Cexample2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example2.h"
#endif

#include "example2Doc.h"
#include "example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample2View

IMPLEMENT_DYNCREATE(Cexample2View, CView)

BEGIN_MESSAGE_MAP(Cexample2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexample2View 构造/析构

Cexample2View::Cexample2View()
{
	// TODO: 在此处添加构造代码

}

Cexample2View::~Cexample2View()
{
}

BOOL Cexample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample2View 绘制

void Cexample2View::OnDraw(CDC* pDC)
{
	Cexample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// Cexample2View 诊断

#ifdef _DEBUG
void Cexample2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample2Doc* Cexample2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample2Doc)));
	return (Cexample2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample2View 消息处理程序


void Cexample2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正被按下");

	Cexample2Doc* pDoc = GetDocument();
	CString Sum;
	Sum.Format(_T("A+B=%d"), pDoc->sum);

	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	dc.TextOutW(300, 300, Sum);
    
	
	CView::OnLButtonDown(nFlags, point);
	
}


void Cexample2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s = _T("左键正在抬起");
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonUp(nFlags, point);
	
}
