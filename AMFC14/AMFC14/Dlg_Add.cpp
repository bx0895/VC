// Dlg_Add.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Add.h"
#include "afxdialogex.h"


// Dlg_Add �Ի���

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


// Dlg_Add ��Ϣ�������


void Dlg_Add::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
