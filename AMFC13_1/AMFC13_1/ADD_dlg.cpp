// ADD_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC13_1.h"
#include "ADD_dlg.h"
#include "afxdialogex.h"


// ADD_dlg 对话框

IMPLEMENT_DYNAMIC(ADD_dlg, CDialogEx)

ADD_dlg::ADD_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD, pParent)
	, num(0)
{

}

ADD_dlg::~ADD_dlg()
{
}

void ADD_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, num);
}


BEGIN_MESSAGE_MAP(ADD_dlg, CDialogEx)
END_MESSAGE_MAP()


// ADD_dlg 消息处理程序
