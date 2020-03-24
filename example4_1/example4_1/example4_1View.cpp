
// example4_1View.cpp : Cexample4_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example4_1.h"
#endif

#include "example4_1Doc.h"
#include "example4_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample4_1View

IMPLEMENT_DYNCREATE(Cexample4_1View, CView)

BEGIN_MESSAGE_MAP(Cexample4_1View, CView)
	ON_COMMAND(ID_Radius, &Cexample4_1View::OnRadius)
//	ON_WM_TIMER()
ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexample4_1View 构造/析构

Cexample4_1View::Cexample4_1View()
{
	// TODO: 在此处添加构造代码

}

Cexample4_1View::~Cexample4_1View()
{
}

BOOL Cexample4_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample4_1View 绘制

void Cexample4_1View::OnDraw(CDC* pDC)
{
	Cexample4_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	
}


// Cexample4_1View 诊断

#ifdef _DEBUG
void Cexample4_1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample4_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample4_1Doc* Cexample4_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample4_1Doc)));
	return (Cexample4_1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample4_1View 消息处理程序


void Cexample4_1View::OnRadius()
{
	// TODO: 在此添加命令处理程序代码
	Cexample4_1Doc* pDoc = GetDocument();
	if (pDoc->set)
	{
		SetTimer(1, 1000, NULL);
		pDoc->set = false;
	}
	
}




void Cexample4_1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample4_1Doc* pDoc = GetDocument();
	
	CRect rect;
	//CRect cr;
	GetClientRect(&rect);
    CClientDC dc(this);
	int n = (rect.bottom-rect.top) / 2;
	int m = (rect.right-rect.left-2*n) / 2;
	//int p= (rect.right - rect.left ) / 2;
	//cr.left = p - 15;  cr.right = p + 15;
	//cr.top = n - 15;   cr.bottom = n + 15;
	int x1 = rect.left+m;  int y1 = rect .top;
	int x2 = rect.right-m;  int y2 = rect .bottom;
	for (int i = 0; i <=15; i++)
	{
		CRect m_crect(x1+i*15, y1+i*15, x2-i * 15, y2- i * 15);
		dc.Ellipse(m_crect);
	}
	//if (cr.bottom<rect.bottom&&cr.left>m)
	//{
		//cr.left -= 15;  cr.right += 15;
		//cr.top -= 15;   cr.bottom+=15;
		//dc.Ellipse(cr);
	//}
	
	CView::OnTimer(nIDEvent);
}
