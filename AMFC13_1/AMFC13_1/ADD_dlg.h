#pragma once


// ADD_dlg �Ի���

class ADD_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_dlg)

public:
	ADD_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long num;
};
