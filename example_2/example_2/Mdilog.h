#pragma once


// Mdilog �Ի���

class Mdilog : public CDialogEx
{
	DECLARE_DYNAMIC(Mdilog)

public:
	Mdilog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mdilog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	int z;
	afx_msg void OnBnClickedButton1();
};
