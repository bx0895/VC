
// AMFC9_1View.cpp : CAMFC9_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "AMFC9_1.h"
#endif

#include "fstream"
#include "iostream"
#include "string"
#include "Mydlg.h"

using namespace std;
#include "AMFC9_1Doc.h"
#include "AMFC9_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC9_1View

IMPLEMENT_DYNCREATE(CAMFC9_1View, CView)

BEGIN_MESSAGE_MAP(CAMFC9_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CAMFC9_1View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CAMFC9_1View::OnFileSaveAs)
	ON_COMMAND(ID_Pop, &CAMFC9_1View::OnPop)
END_MESSAGE_MAP()

// CAMFC9_1View 构造/析构

CAMFC9_1View::CAMFC9_1View()
{
	// TODO: 在此处添加构造代码

}

CAMFC9_1View::~CAMFC9_1View()
{
}

BOOL CAMFC9_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CAMFC9_1View 绘制

void CAMFC9_1View::OnDraw(CDC* /*pDC*/)
{
	CAMFC9_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CAMFC9_1View 诊断

#ifdef _DEBUG
void CAMFC9_1View::AssertValid() const
{
	CView::AssertValid();
}

void CAMFC9_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CAMFC9_1Doc* CAMFC9_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CAMFC9_1Doc)));
	return (CAMFC9_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CAMFC9_1View 消息处理程序


void CAMFC9_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	
	CString filename;
	CFileDialog file(true);
	int r = file.DoModal();
	if (r == IDOK)
	{
		filename = file.GetPathName();
		ofstream ofs("D:\\abc.txt",ios::out);
		std::string s(CW2A(filename.GetString()));
		ofs << s<<endl;
		
	}
}


void CAMFC9_1View::OnFileSaveAs()
{
	// TODO: 在此添加命令处理程序代码

}


void CAMFC9_1View::OnPop()
{
	// TODO: 在此添加命令处理程序代码
	Mydlg dlg = new Mydlg();
	int r = dlg.DoModal();
	if (r == IDOK)
	{
	}
}
