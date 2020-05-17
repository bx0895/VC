
// AMFC9-2View.cpp : CAMFC92View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC9-2.h"
#endif

#include "AMFC9-2Doc.h"
#include "AMFC9-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC92View

IMPLEMENT_DYNCREATE(CAMFC92View, CView)

BEGIN_MESSAGE_MAP(CAMFC92View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CAMFC92View 构造/析构

CAMFC92View::CAMFC92View()
{
	// TODO: 在此处添加构造代码

}

CAMFC92View::~CAMFC92View()
{
}

BOOL CAMFC92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CAMFC92View 绘制

void CAMFC92View::OnDraw(CDC* /*pDC*/)
{
	CAMFC92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CAMFC92View 诊断

#ifdef _DEBUG
void CAMFC92View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC92Doc* CAMFC92View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC92Doc)));
	return (CAMFC92Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC92View 消息处理程序


void CAMFC92View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CClientDC dc(this);
	int x1 = 300;  int x2 = 700;
	int y1 = 200;  int y2 = 400;
	for (int i = 1; i <= 6; i++)
	{
		CPen pen(PS_SOLID, 1, RGB(200 - i * 20, 150 - i * 6, i * 14));
		CPen* pOldPen = dc.SelectObject(&pen);
		CRect m_crect(x1 +i * 15, y1 + i * 10, x2 - i * 15, y2- i * 10);
		dc.Ellipse(m_crect);
		dc.SelectObject(pOldPen);
	}

}
