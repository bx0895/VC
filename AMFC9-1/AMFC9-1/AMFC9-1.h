
// AMFC9-1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAMFC91App: 
// �йش����ʵ�֣������ AMFC9-1.cpp
//

class CAMFC91App : public CWinApp
{
public:
	CAMFC91App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAMFC91App theApp;