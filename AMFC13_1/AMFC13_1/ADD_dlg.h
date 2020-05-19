#pragma once


// ADD_dlg 对话框

class ADD_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_dlg)

public:
	ADD_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long num;
};
