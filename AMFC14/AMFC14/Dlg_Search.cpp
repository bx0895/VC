// Dlg_Search.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AMFC14.h"
#include "Dlg_Search.h"
#include "afxdialogex.h"


// Dlg_Search �Ի���

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


// Dlg_Search ��Ϣ�������


void Dlg_Search::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
