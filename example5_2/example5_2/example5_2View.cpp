
// example5_2View.cpp : Cexample5_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example5_2.h"
#endif

#include "example5_2Doc.h"
#include "example5_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample5_2View

IMPLEMENT_DYNCREATE(Cexample5_2View, CView)

BEGIN_MESSAGE_MAP(Cexample5_2View, CView)
END_MESSAGE_MAP()

// Cexample5_2View 构造/析构

Cexample5_2View::Cexample5_2View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_Width = BM.bmWidth;
	m_Height = BM.bmHeight;
}

Cexample5_2View::~Cexample5_2View()
{
}

BOOL Cexample5_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample5_2View 绘制

void Cexample5_2View::OnDraw(CDC* pDC)
{
	Cexample5_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC DC;
	DC.CreateCompatibleDC(NULL);
	DC.SelectObject(m_Bitmap);
	pDC->BitBlt(300, 50, m_Width, m_Height, &DC, 0, 0, SRCCOPY);
}


// Cexample5_2View 诊断

#ifdef _DEBUG
void Cexample5_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample5_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample5_2Doc* Cexample5_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample5_2Doc)));
	return (Cexample5_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample5_2View 消息处理程序
