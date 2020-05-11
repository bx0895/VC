
// UsingLib0llView.cpp : CUsingLib0llView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingLib0ll.h"
#endif

#include "UsingLib0llDoc.h"
#include "UsingLib0llView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"W32D.h"
// CUsingLib0llView

IMPLEMENT_DYNCREATE(CUsingLib0llView, CView)

BEGIN_MESSAGE_MAP(CUsingLib0llView, CView)
END_MESSAGE_MAP()

// CUsingLib0llView 构造/析构

CUsingLib0llView::CUsingLib0llView()
{
	// TODO: 在此处添加构造代码

}

CUsingLib0llView::~CUsingLib0llView()
{
}

BOOL CUsingLib0llView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingLib0llView 绘制

void CUsingLib0llView::OnDraw(CDC* pDC)
{
	CUsingLib0llDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
		s= CString(pchar());
		pDC->TextOutW(200, 200, s);
		CString ss;
		ss.Format(_T("%d,这是从动态库返回的值。"),GetInt());
		pDC->TextOutW(200, 250, ss);
	
}


// CUsingLib0llView 诊断

#ifdef _DEBUG
void CUsingLib0llView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLib0llView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLib0llDoc* CUsingLib0llView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLib0llDoc)));
	return (CUsingLib0llDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLib0llView 消息处理程序
