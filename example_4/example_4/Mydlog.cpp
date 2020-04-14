// Mydlog.cpp : 实现文件
//

#include "stdafx.h"
#include "example_4.h"
#include "Mydlog.h"
#include "afxdialogex.h"


// Mydlog 对话框

IMPLEMENT_DYNAMIC(Mydlog, CDialogEx)

Mydlog::Mydlog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(0)
	, z(_T(""))
{

}

Mydlog::~Mydlog()
{
}

void Mydlog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(Mydlog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlog::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlog 消息处理程序


void Mydlog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	CString X = x;
	int Y = y;
	CString s;
	s.Format(_T("%d"), Y);
	z += X+s;
	UpdateData(false);
}
