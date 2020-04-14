#pragma once


// Mydlog 对话框

class Mydlog : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlog)

public:
	Mydlog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString x;
	int y;
	afx_msg void OnBnClickedButton1();
	CString z;
};
