// Mydlg2.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC1.h"
#include "Mydlg2.h"
#include "afxdialogex.h"


// Mydlg2 对话框

IMPLEMENT_DYNAMIC(Mydlg2, CDialogEx)

Mydlg2::Mydlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, r(0)
	, g(0)
	, b(0)
{

}

Mydlg2::~Mydlg2()
{
}

void Mydlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDV_MinMaxFloat(pDX, r, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, g);
	DDV_MinMaxFloat(pDX, g, 0, 255);
	DDX_Text(pDX, IDC_EDIT3, b);
	DDV_MinMaxFloat(pDX, b, 0, 255);
}


BEGIN_MESSAGE_MAP(Mydlg2, CDialogEx)
END_MESSAGE_MAP()


// Mydlg2 消息处理程序
