// Mdilog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "example_2.h"
#include "Mdilog.h"
#include "afxdialogex.h"


// Mdilog �Ի���

IMPLEMENT_DYNAMIC(Mdilog, CDialogEx)

Mdilog::Mdilog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

Mdilog::~Mdilog()
{
}

void Mdilog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(Mdilog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mdilog::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mdilog ��Ϣ�������


void Mdilog::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	int X = x;
	int Y = y;
	z = X + Y;
	UpdateData(false);
}
