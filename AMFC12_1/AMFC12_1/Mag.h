#pragma once
#include "MainFrm.h"
#include "AMFC12_1Set.h"
#include "AMFC12_1Doc.h"

// CMag �Ի���

class CMag : public CDialogEx
{
	DECLARE_DYNAMIC(CMag)

public:
	CMag(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMag();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CAMFC12_1Set* m_pSet;
//	CAMFC12_1Set*
//		virtual BOOL OnInitDialog();
};
