
// AMFC13_1.h : AMFC13_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC13_1App:
// �йش����ʵ�֣������ AMFC13_1.cpp
//

class CAMFC13_1App : public CWinApp
{
public:
	CAMFC13_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC13_1App theApp;
