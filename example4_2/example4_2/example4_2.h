
// example4_2.h : example4_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cexample4_2App:
// �йش����ʵ�֣������ example4_2.cpp
//

class Cexample4_2App : public CWinApp
{
public:
	Cexample4_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexample4_2App theApp;
