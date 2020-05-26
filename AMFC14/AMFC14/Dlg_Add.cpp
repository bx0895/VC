// Dlg_Add.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Add.h"
#include "afxdialogex.h"


// Dlg_Add 对话框

IMPLEMENT_DYNAMIC(Dlg_Add, CDialogEx)

Dlg_Add::Dlg_Add(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_add, pParent)
	, name(_T(""))
	, number(_T(""))
	, subject(_T(""))
	, sex(_T(""))
	, age(_T(""))
	, phone(_T(""))
	, address(_T(""))
	, picture(_T(""))
{

}

Dlg_Add::~Dlg_Add()
{
}

void Dlg_Add::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name);
	DDX_Text(pDX, IDC_EDIT2, number);
	DDX_Text(pDX, IDC_EDIT3, subject);
	DDX_Text(pDX, IDC_EDIT4, sex);
	DDX_Text(pDX, IDC_EDIT5, age);
	DDX_Text(pDX, IDC_EDIT6, phone);
	DDX_Text(pDX, IDC_EDIT7, address);
	DDX_Text(pDX, IDC_EDIT8, picture);
}


BEGIN_MESSAGE_MAP(Dlg_Add, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT6, &Dlg_Add::OnEnChangeEdit6)
END_MESSAGE_MAP()


// Dlg_Add 消息处理程序


void Dlg_Add::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
