
// AMFC12_1.h : AMFC12_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC12_1App:
// �йش����ʵ�֣������ AMFC12_1.cpp
//

class CAMFC12_1App : public CWinApp
{
public:
	CAMFC12_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC12_1App theApp;
