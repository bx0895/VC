
// AMFC10_2.h : AMFC10_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC10_2App:
// �йش����ʵ�֣������ AMFC10_2.cpp
//

class CAMFC10_2App : public CWinApp
{
public:
	CAMFC10_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC10_2App theApp;
