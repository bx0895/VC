#pragma once


// Mydlog �Ի���

class Mydlog : public CDialogEx
{
	DECLARE_DYNAMIC(Mydlog)

public:
	Mydlog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mydlog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString x;
	int y;
	afx_msg void OnBnClickedButton1();
	CString z;
};
