// Mydlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC1.h"
#include "Mydlg1.h"
#include "afxdialogex.h"


// Mydlg1 对话框

IMPLEMENT_DYNAMIC(Mydlg1, CDialogEx)

Mydlg1::Mydlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, T(0)
	, L(0)
	, B(0)
	, R(0)
{

}

Mydlg1::~Mydlg1()
{
}

void Mydlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, T);
	DDV_MinMaxInt(pDX, T, 0, 800);
	DDX_Text(pDX, IDC_EDIT2, L);
	DDV_MinMaxInt(pDX, L, 0, 1000);
	DDX_Text(pDX, IDC_EDIT3, B);
	DDV_MinMaxInt(pDX, B, 0, 800);
	DDX_Text(pDX, IDC_EDIT4, R);
	DDV_MinMaxInt(pDX, R, 0, 1000);
}


BEGIN_MESSAGE_MAP(Mydlg1, CDialogEx)
	//ON_BN_CLICKED(IDC_BUTTON1, &Mydlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg1 消息处理程序


/*void Mydlg1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
*/
