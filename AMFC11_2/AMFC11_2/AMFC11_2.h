
// AMFC11_2.h : AMFC11_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC11_2App:
// �йش����ʵ�֣������ AMFC11_2.cpp
//

class CAMFC11_2App : public CWinApp
{
public:
	CAMFC11_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC11_2App theApp;
