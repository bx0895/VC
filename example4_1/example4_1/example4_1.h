
// example4_1.h : example4_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cexample4_1App:
// �йش����ʵ�֣������ example4_1.cpp
//

class Cexample4_1App : public CWinApp
{
public:
	Cexample4_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexample4_1App theApp;
