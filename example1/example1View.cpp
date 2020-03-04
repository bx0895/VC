
// example1View.cpp : Cexample1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example1.h"
#endif

#include "example1Doc.h"
#include "example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample1View

IMPLEMENT_DYNCREATE(Cexample1View, CView)

BEGIN_MESSAGE_MAP(Cexample1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample1View 构造/析构

Cexample1View::Cexample1View()
{
	// TODO: 在此处添加构造代码

}

Cexample1View::~Cexample1View()
{
}

BOOL Cexample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample1View 绘制

void Cexample1View::OnDraw(CDC* pDC)
{
	Cexample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	/*
	int a = pDoc->A;
	CString Str;
	Str.Format(_T("%d"), a);
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(200, 250, Str);
	*/

	
	CString s=_T("我是xxx");
	int A = 3;
	CString Str;
	Str.Format(_T("%d"), A);
	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(200, 250, Str);
	

}


// Cexample1View 打印

BOOL Cexample1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Cexample1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void Cexample1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// Cexample1View 诊断

#ifdef _DEBUG
void Cexample1View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample1Doc* Cexample1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample1Doc)));
	return (Cexample1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample1View 消息处理程序


void Cexample1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample1Doc* pDoc = GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void Cexample1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexample1Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("%d"), pDoc->count);
	CClientDC dc(this);
	dc.TextOutW(300,300,s);
	CView::OnRButtonDown(nFlags, point);
}
