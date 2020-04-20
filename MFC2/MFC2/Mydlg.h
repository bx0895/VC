#pragma once


// Mydlg 对话框

class Mydlg : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlg)

public:
	Mydlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mydlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	float r;
	float g;
	float b;
};
