#pragma once
#include "afxwin.h"


// Dlg_Record �Ի���

class Dlg_Record : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_Record)

public:
	Dlg_Record(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg_Record();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox Lbox;
	CArray<CString, CString> str;
	virtual BOOL OnInitDialog();
};
