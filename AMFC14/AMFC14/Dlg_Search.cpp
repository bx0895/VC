// Dlg_Search.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Search.h"
#include "afxdialogex.h"


// Dlg_Search 对话框

IMPLEMENT_DYNAMIC(Dlg_Search, CDialogEx)

Dlg_Search::Dlg_Search(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, message(_T(""))
{

}

Dlg_Search::~Dlg_Search()
{
}

void Dlg_Search::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, message);
}


BEGIN_MESSAGE_MAP(Dlg_Search, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &Dlg_Search::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Dlg_Search 消息处理程序


void Dlg_Search::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
