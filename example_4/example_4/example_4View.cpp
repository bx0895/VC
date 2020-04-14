
// example_4View.cpp : Cexample_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example_4.h"
#endif

#include "example_4Doc.h"
#include "example_4View.h"
#include "Mydlog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample_4View

IMPLEMENT_DYNCREATE(Cexample_4View, CView)

BEGIN_MESSAGE_MAP(Cexample_4View, CView)
END_MESSAGE_MAP()

// Cexample_4View 构造/析构

Cexample_4View::Cexample_4View()
{
	// TODO: 在此处添加构造代码

}

Cexample_4View::~Cexample_4View()
{
}

BOOL Cexample_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample_4View 绘制

void Cexample_4View::OnDraw(CDC* pDC)
{
	Cexample_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	Mydlog *pd = new Mydlog();
	pd->Create(IDD_DIALOG1);
	pd->ShowWindow(1);
}


// Cexample_4View 诊断

#ifdef _DEBUG
void Cexample_4View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample_4Doc* Cexample_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample_4Doc)));
	return (Cexample_4Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample_4View 消息处理程序
