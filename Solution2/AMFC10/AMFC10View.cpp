
// AMFC10View.cpp : CAMFC10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC10.h"
#endif

#include "AMFC10Doc.h"
#include "AMFC10View.h"
#include "win32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC10View

IMPLEMENT_DYNCREATE(CAMFC10View, CView)

BEGIN_MESSAGE_MAP(CAMFC10View, CView)
END_MESSAGE_MAP()

// CAMFC10View 构造/析构

CAMFC10View::CAMFC10View()
{
	// TODO: 在此处添加构造代码

}

CAMFC10View::~CAMFC10View()
{
}

BOOL CAMFC10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CAMFC10View 绘制

void CAMFC10View::OnDraw(CDC* pDC)
{
	CAMFC10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("%d"), factorial(5));
	pDC->TextOutW(300, 100, s);
}


// CAMFC10View 诊断

#ifdef _DEBUG
void CAMFC10View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC10Doc* CAMFC10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC10Doc)));
	return (CAMFC10Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC10View 消息处理程序
