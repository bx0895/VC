// MyDlg2.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC0.h"
#include "MyDlg2.h"
#include "afxdialogex.h"
#include "MyDlg1.h"
#include "MFC0Doc.h"
#include "MFC0View.h"

// MyDlg2 �Ի���

IMPLEMENT_DYNAMIC(MyDlg2, CDialogEx)

MyDlg2::MyDlg2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, str(_T(""))
{

}

MyDlg2::~MyDlg2()
{
}

void MyDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Control(pDX, IDC_LIST1, Lbox);
}


BEGIN_MESSAGE_MAP(MyDlg2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg2::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg2 ��Ϣ�������


void MyDlg2::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	
}
