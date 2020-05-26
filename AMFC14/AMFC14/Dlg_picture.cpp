// Dlg_picture.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_picture.h"
#include "afxdialogex.h"


// Dlg_picture 对话框

IMPLEMENT_DYNAMIC(Dlg_picture, CDialogEx)

Dlg_picture::Dlg_picture(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_PICTURE, pParent)
{

}

Dlg_picture::~Dlg_picture()
{
}

void Dlg_picture::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dlg_picture, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Dlg_picture 消息处理程序


void Dlg_picture::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CImage img;
	img.Load(filename);
	CRect cr;
	int x, y, w, h;
	CRect rect;
	CDC* pDC = GetDC();
	GetClientRect(&rect);
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
