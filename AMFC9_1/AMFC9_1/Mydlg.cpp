// Mydlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AMFC9_1.h"
#include "Mydlg.h"
#include "afxdialogex.h"

#include "fstream"
#include "iostream"
#include "string"
using namespace std;

// Mydlg �Ի���

IMPLEMENT_DYNAMIC(Mydlg, CDialogEx)

Mydlg::Mydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Mydlg::~Mydlg()
{
}

void Mydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Mydlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Mydlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Mydlg ��Ϣ�������


void Mydlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	ifstream ifs("D:\\abc.txt",ios::in);
	string filename;
	ifs >> filename;

	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	CImage img;
	img.Load(CString(filename.c_str()));
	img.Draw(pDC->m_hDC,0,0,img.GetWidth(),img.GetHeight());

}
