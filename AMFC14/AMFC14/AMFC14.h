
// AMFC14.h : AMFC14 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC14App:
// �йش����ʵ�֣������ AMFC14.cpp
//

class CAMFC14App : public CWinApp
{
public:
	CAMFC14App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC14App theApp;
