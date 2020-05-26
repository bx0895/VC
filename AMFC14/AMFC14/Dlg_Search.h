#pragma once


// Dlg_Search 对话框

class Dlg_Search : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_Search)

public:
	Dlg_Search(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg_Search();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString message;
};
