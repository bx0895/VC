// Alter_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC13_1.h"
#include "Alter_dlg.h"
#include "afxdialogex.h"


// Alter_dlg 对话框

IMPLEMENT_DYNAMIC(Alter_dlg, CDialogEx)

Alter_dlg::Alter_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
{

}

Alter_dlg::~Alter_dlg()
{
}

void Alter_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
}


BEGIN_MESSAGE_MAP(Alter_dlg, CDialogEx)
END_MESSAGE_MAP()


// Alter_dlg 消息处理程序
