// Dlg_Record.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Record.h"
#include "afxdialogex.h"


// Dlg_Record �Ի���

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


// Dlg_Record ��Ϣ�������


BOOL Dlg_Record::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	UpdateData();
	for (int i = 0; i < str.GetSize(); i++)
	{
		Lbox.AddString(str[i]);
	}
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
