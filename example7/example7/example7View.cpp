
// example7View.cpp : Cexample7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example7.h"
#endif

#include "example7Doc.h"
#include "example7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample7View

IMPLEMENT_DYNCREATE(Cexample7View, CView)

BEGIN_MESSAGE_MAP(Cexample7View, CView)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample7View 构造/析构

Cexample7View::Cexample7View()
{
	// TODO: 在此处添加构造代码
	m_strLine = "";
	m_point = 0;
	cr.top = 250;   cr.left = 300;
	cr.right = 450;  cr.bottom = 280;
}

Cexample7View::~Cexample7View()
{
}

BOOL Cexample7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample7View 绘制

void Cexample7View::OnDraw(CDC* pDC)
{
	Cexample7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(cr);
}


// Cexample7View 诊断

#ifdef _DEBUG
void Cexample7View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample7Doc* Cexample7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample7Doc)));
	return (Cexample7Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample7View 消息处理程序


int Cexample7View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CreateSolidCaret(tm.tmAveCharWidth / 8, tm.tmHeight);
	ShowCaret();
	return 0;
}


void Cexample7View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar||m_point.x>=cr.right)
	{
		m_strLine.Empty();
		m_point.y += tm.tmHeight;
		cr.bottom += 30;
		InvalidateRect(NULL, TRUE);
	}
	else if (0x08 == nChar)
	{
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(m_point.x, m_point.y, m_strLine);
		m_strLine = m_strLine.Left(m_strLine.GetLength()-1);
		dc.SetTextColor(clr);
	}
	else 
	{
     m_strLine= m_strLine+(TCHAR)nChar;
	}
	
    
	CSize zs=dc.GetTextExtent(m_strLine);
	CPoint p;
	p.x = m_point.x + zs.cx;
	p.y = m_point.y;
	SetCaretPos(p);
	dc.TextOutW(m_point.x, m_point.y, m_strLine);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Cexample7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCaretPos(point);
	m_strLine.Empty();
	m_point = point;
	CView::OnLButtonDown(nFlags, point);
}
