
// AMFC11_3.h : AMFC11_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC11_3App:
// �йش����ʵ�֣������ AMFC11_3.cpp
//

class CAMFC11_3App : public CWinApp
{
public:
	CAMFC11_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC11_3App theApp;
