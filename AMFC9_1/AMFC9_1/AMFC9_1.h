
// AMFC9_1.h : AMFC9_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CAMFC9_1App:
// �йش����ʵ�֣������ AMFC9_1.cpp
//

class CAMFC9_1App : public CWinApp
{
public:
	CAMFC9_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC9_1App theApp;
