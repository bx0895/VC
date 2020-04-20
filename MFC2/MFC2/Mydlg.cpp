// Mydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC2.h"
#include "Mydlg.h"
#include "afxdialogex.h"


// Mydlg 对话框

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r(0)
	, g(0)
	, b(0)
{

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r);
	DDV_MinMaxFloat(pDX, r, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, g);
	DDV_MinMaxInt(pDX, g, 0, 255);
	DDX_Text(pDX, IDC_EDIT3, b);
	DDV_MinMaxFloat(pDX, b, 0, 255);
}


BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
END_MESSAGE_MAP()


// Mydlg 消息处理程序
