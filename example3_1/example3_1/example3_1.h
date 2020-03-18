
// example3_1.h : example3_1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// Cexample3_1App:
// 有关此类的实现，请参阅 example3_1.cpp
//

class Cexample3_1App : public CWinApp
{
public:
	Cexample3_1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexample3_1App theApp;
