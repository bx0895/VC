#pragma once


// Dlg_picture 对话框

class Dlg_picture : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_picture)

public:
	Dlg_picture(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg_picture();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PICTURE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnPaint();
	CString filename;
};
