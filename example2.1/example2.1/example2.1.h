
// example2.1.h : example2.1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cexample21App:
// 有关此类的实现，请参阅 example2.1.cpp
//

class Cexample21App : public CWinApp
{
public:
	Cexample21App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexample21App theApp;
