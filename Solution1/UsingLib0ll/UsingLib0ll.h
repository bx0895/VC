
// UsingLib0ll.h : UsingLib0ll Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUsingLib0llApp:
// �йش����ʵ�֣������ UsingLib0ll.cpp
//

class CUsingLib0llApp : public CWinApp
{
public:
	CUsingLib0llApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUsingLib0llApp theApp;
