
// example6View.cpp : Cexample6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "example6.h"
#endif

#include "example6Doc.h"
#include "example6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample6View

IMPLEMENT_DYNCREATE(Cexample6View, CView)

BEGIN_MESSAGE_MAP(Cexample6View, CView)
	ON_COMMAND(ID_FILE_OPEN, &Cexample6View::OnFileOpen)
END_MESSAGE_MAP()

// Cexample6View 构造/析构

Cexample6View::Cexample6View()
{
	// TODO: 在此处添加构造代码

}

Cexample6View::~Cexample6View()
{
}

BOOL Cexample6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexample6View 绘制

void Cexample6View::OnDraw(CDC* pDC)
{
	Cexample6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// Cexample6View 诊断

#ifdef _DEBUG
void Cexample6View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample6Doc* Cexample6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample6Doc)));
	return (Cexample6Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample6View 消息处理程序


void Cexample6View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
		CDC *pDC;
		pDC = GetDC();    //得到对话框的设备环境
		CDC dcMemory;
		dcMemory.CreateCompatibleDC(pDC);//得到与对话框设备环境相兼容的内存DC
		CFileDialog cfd(true); 
	int r = cfd.DoModal(); 
		
	if (r == IDOK)

	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
