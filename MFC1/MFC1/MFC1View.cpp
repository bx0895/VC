
// MFC1View.cpp : CMFC1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC1.h"
#endif

#include "MFC1Doc.h"
#include "MFC1View.h"
#include "Mydlg1.h"
#include "Mydlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC1View

IMPLEMENT_DYNCREATE(CMFC1View, CView)

BEGIN_MESSAGE_MAP(CMFC1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_Size, &CMFC1View::OnSize)
	ON_COMMAND(ID_Color, &CMFC1View::OnColor)
END_MESSAGE_MAP()

// CMFC1View 构造/析构

CMFC1View::CMFC1View()
{
	// TODO: 在此处添加构造代码
	cr.top = 0;
	cr.left = 0;
	cr.bottom = 0;
	cr.right = 0;
	set = false;
	x=50;
	y = 100;
	z = 200;
}

CMFC1View::~CMFC1View()
{
}

BOOL CMFC1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC1View 绘制

void CMFC1View::OnDraw(CDC* pDC)
{
	CMFC1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CPen pen(PS_SOLID, 1, RGB(x,y,z));
	CPen* pOldPen = pDC->SelectObject(&pen);
	pDC->Ellipse(cr);
}


// CMFC1View 诊断

#ifdef _DEBUG
void CMFC1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC1Doc* CMFC1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC1Doc)));
	return (CMFC1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC1View 消息处理程序


void CMFC1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left = point.x;
	cr.top = point.y;
	set = true;
	CView::OnLButtonDown(nFlags, point);
}


void CMFC1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (set)
	{
    cr.right = point.x;
	cr.bottom = point.y;
	x++;
	y++;
	z--;
	Invalidate();
	}
	
	CView::OnMouseMove(nFlags, point);
}


void CMFC1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	set = false;
	CView::OnLButtonUp(nFlags, point);
}


void CMFC1View::OnSize()
{
	// TODO: 在此添加命令处理程序代码
	Mydlg1 dlg1 = new Mydlg1;
	int r = dlg1.DoModal();
	if (r == IDOK)
	{
		cr.top = dlg1.T;
		cr.bottom = dlg1.B;
		cr.left = dlg1.L;
		cr.right = dlg1.R;
		Invalidate();
	}
}


void CMFC1View::OnColor()
{
	// TODO: 在此添加命令处理程序代码
}
