// Dlg_Record.cpp : 实现文件
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Record.h"
#include "afxdialogex.h"


// Dlg_Record 对话框

IMPLEMENT_DYNAMIC(Dlg_Record, CDialogEx)

Dlg_Record::Dlg_Record(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

Dlg_Record::~Dlg_Record()
{
}

void Dlg_Record::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(Dlg_Record, CDialogEx)
END_MESSAGE_MAP()


// Dlg_Record 消息处理程序


BOOL Dlg_Record::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData();
	for (int i = 0; i < str.GetSize(); i++)
	{
		Lbox.AddString(str[i]);
	}
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
