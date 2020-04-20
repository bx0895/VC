// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "example9_1.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, LBox);
	DDX_Text(pDX, IDC_EDIT2, x);
	DDX_LBString(pDX, IDC_LIST1, y);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


BOOL MyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void MyDlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	BOOL isOpen = TRUE;		//�Ƿ��(����Ϊ����)
	CString defaultDir = L"C:\\FileTest";	//Ĭ�ϴ򿪵��ļ�·��
	CString fileName = L"";			//Ĭ�ϴ򿪵��ļ���
	CString filter = L"�ļ� (*.doc; *.ppt; *.xls)|*.doc;*.ppt;*.xls||";	//�ļ����ǵ�����
	CFileDialog openFileDlg(isOpen, defaultDir, fileName, OFN_HIDEREADONLY | OFN_READONLY, filter, NULL);
	openFileDlg.GetOFN().lpstrInitialDir = L"E:\\FileTest\\test.doc";
	INT_PTR result = openFileDlg.DoModal();
	CString filePath=defaultDir + "\\test.doc";
	if (result == IDOK) {
		filePath = openFileDlg.GetPathName();
		x= openFileDlg.GetPathName();
	}
	SetDlgItemTextW(IDC_EDIT2, filePath);
	SetDlgItemTextW(IDC_EDIT1, filePath);
}
