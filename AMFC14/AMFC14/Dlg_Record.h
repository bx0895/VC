#pragma once
#include "afxwin.h"


// Dlg_Record 对话框

class Dlg_Record : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_Record)

public:
	Dlg_Record(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg_Record();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListBox Lbox;
	CArray<CString, CString> str;
	virtual BOOL OnInitDialog();
};
