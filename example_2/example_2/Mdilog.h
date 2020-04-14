#pragma once


// Mdilog 对话框

class Mdilog : public CDialogEx
{
	DECLARE_DYNAMIC(Mdilog)

public:
	Mdilog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mdilog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	int z;
	afx_msg void OnBnClickedButton1();
};
