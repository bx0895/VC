#pragma once


// Alter_dlg �Ի���

class Alter_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Alter_dlg)

public:
	Alter_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Alter_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long x;
};
