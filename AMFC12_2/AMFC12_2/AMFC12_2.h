
// AMFC12_2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAMFC12_2App: 
// �йش����ʵ�֣������ AMFC12_2.cpp
//

class CAMFC12_2App : public CWinApp
{
public:
	CAMFC12_2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAMFC12_2App theApp;