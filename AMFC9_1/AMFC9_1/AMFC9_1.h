
// AMFC9_1.h : AMFC9_1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CAMFC9_1App:
// 有关此类的实现，请参阅 AMFC9_1.cpp
//

class CAMFC9_1App : public CWinApp
{
public:
	CAMFC9_1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CAMFC9_1App theApp;
