
// example2.2View.cpp : Cexample22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example2.2.h"
#endif

#include "example2.2Doc.h"
#include "example2.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample22View

IMPLEMENT_DYNCREATE(Cexample22View, CView)

BEGIN_MESSAGE_MAP(Cexample22View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample22View 构造/析构

Cexample22View::Cexample22View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);
}

Cexample22View::~Cexample22View()
{
}

BOOL Cexample22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample22View 绘制

void Cexample22View::OnDraw(CDC* pDC)
{
	Cexample22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < ca.GetSize(); i++) {
		pDC->Ellipse(ca.GetAt(i));//点击一下出现一个椭圆，窗口改变的时候椭圆还在
	}
}


// Cexample22View 诊断

#ifdef _DEBUG
void Cexample22View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample22Doc* Cexample22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample22Doc)));
	return (Cexample22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample22View 消息处理程序


void Cexample22View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int a = rand() % 50 + 5;
	int b = rand() % 50 + 10;
	CRect cr(point.x - a, point.y - b, point.x + a, point.y + b);
	ca.Add(cr);//把椭圆加入到数组中
	this->Invalidate();
	//CClientDC dc(this);
	//dc.Ellipse(cr);
	CView::OnLButtonDown(nFlags, point);
}
