#pragma once


// Dlg_Add 对话框

class Dlg_Add : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_Add)

public:
	Dlg_Add(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg_Add();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_add };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit6();
	CString name;
	CString number;
	CString subject;
	CString sex;
	CString age;
	CString phone;
	CString address;
	CString picture;
};
