#pragma once


// Dlg_picture �Ի���

class Dlg_picture : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_picture)

public:
	Dlg_picture(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Dlg_picture();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PICTURE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnPaint();
	CString filename;
};
