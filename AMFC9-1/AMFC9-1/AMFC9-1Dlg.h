
// AMFC9-1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CAMFC91Dlg �Ի���
class CAMFC91Dlg : public CDialogEx
{
// ����
public:
	CAMFC91Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AMFC91_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString str;
	CString s;
	CString chang;
	int n;
	afx_msg void OnBnClickedButton1();
	CListBox Lbox;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedOk();
};
