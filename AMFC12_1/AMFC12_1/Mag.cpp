// Mag.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AMFC12_1.h"
#include "Mag.h"
#include "afxdialogex.h"
#include "AMFC12_1Set.h"
#include "AMFC12_1Doc.h"
#include "AMFC12_1View.h"


// CMag �Ի���

IMPLEMENT_DYNAMIC(CMag, CDialogEx)

CMag::CMag(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CMag::~CMag()
{
	
}

void CMag::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMag, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMag::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CMag ��Ϣ�������


void CMag::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	
}


//BOOL CMag::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//
//	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//				  // �쳣: OCX ����ҳӦ���� FALSE
//}


void CMag::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CImage img;
	img.Load(pathname);
	CRect cr;
	CDC* pDC = GetDC();
	int x, y, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		x = (rect.Width() - w) / 2;
		y = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		x = 0;
		y = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, x, y, w, h);
	ReleaseDC(pDC);
}
