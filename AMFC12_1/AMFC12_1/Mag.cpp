// Mag.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC12_1.h"
#include "Mag.h"
#include "afxdialogex.h"
#include "AMFC12_1Set.h"
#include "AMFC12_1Doc.h"
#include "AMFC12_1View.h"


// CMag 对话框

IMPLEMENT_DYNAMIC(CMag, CDialogEx)

CMag::CMag(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CMag::~CMag()
{
	
}

void CMag::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMag, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMag::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CMag 消息处理程序


void CMag::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
	
}


//BOOL CMag::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//
//	// TODO:  在此添加额外的初始化
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//				  // 异常: OCX 属性页应返回 FALSE
//}


void CMag::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CImage img;
	img.Load(pathname);
	CRect cr;
	CDC* pDC = GetDC();
	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		x = (rect.Width() - w) / 2;
		y = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		x = 0;
		y = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, x, y, w, h);
	ReleaseDC(pDC);
}
