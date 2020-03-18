
// example3_2View.cpp : Cexample3_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example3_2.h"
#endif

#include "example3_2Doc.h"
#include "example3_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_2View

IMPLEMENT_DYNCREATE(Cexample3_2View, CView)

BEGIN_MESSAGE_MAP(Cexample3_2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample3_2View 构造/析构

Cexample3_2View::Cexample3_2View()
{
	// TODO: 在此处添加构造代码

}

Cexample3_2View::~Cexample3_2View()
{
}

BOOL Cexample3_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample3_2View 绘制

void Cexample3_2View::OnDraw(CDC* pDC)
{
	Cexample3_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	pDC->Rectangle(pDoc->m_crect);
}


// Cexample3_2View 诊断

#ifdef _DEBUG
void Cexample3_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_2Doc* Cexample3_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_2Doc)));
	return (Cexample3_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_2View 消息处理程序


void Cexample3_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample3_2Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crect.left > 0)
		{
			pDoc->m_crect.left -= 10;
			pDoc->m_crect.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crect.right <=(cr.right-cr.left))
		{
			pDoc->m_crect.left += 10;
			pDoc->m_crect.right += 10;
		}
		break;
	case VK_UP:
		if (pDoc->m_crect.top >0)
		{
			pDoc->m_crect.top -= 10;
			pDoc->m_crect.bottom -= 10;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crect.bottom <= (cr.bottom - cr.top))
		{
			pDoc->m_crect.top += 10;
			pDoc->m_crect.bottom += 10;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crect.left > 0&& pDoc->m_crect.left > 0)
		{
			pDoc->m_crect.top -= 10;
			pDoc->m_crect.left -= 10;
		}
		break;
	case VK_END:
		if (pDoc->m_crect.top <cr.bottom && pDoc->m_crect.left <cr.right)
		{
			pDoc->m_crect.top += 10;
			pDoc->m_crect.left += 10;
		}
	default:
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cexample3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	Cexample3_2Doc* pDoc = GetDocument();
	pDoc->m_crect.left = 600;
	pDoc->m_crect.top = 250;
	pDoc->m_crect.right = 800;
	pDoc->m_crect.bottom = 350;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
