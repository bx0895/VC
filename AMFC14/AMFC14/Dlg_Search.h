#pragma once


// Dlg_Search �Ի���

class Dlg_Search : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_Search)

public:
	Dlg_Search(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg_Search();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CString message;
};
