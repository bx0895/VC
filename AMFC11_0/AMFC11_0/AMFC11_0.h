
// AMFC11_0.h : AMFC11_0 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC11_0App:
// �йش����ʵ�֣������ AMFC11_0.cpp
//

class CAMFC11_0App : public CWinApp
{
public:
	CAMFC11_0App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC11_0App theApp;
