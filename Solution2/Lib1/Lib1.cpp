// Lib1.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Lib1.h"


// 这是导出变量的一个示例
LIB1_API int nLib1=0;

// 这是导出函数的一个示例。
LIB1_API int fnLib1(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Lib1.h
CLib1::CLib1()
{
    return;
}

LIB1_API float FAC::convert(float deg)
{
	float n = (3.14 / 180.0)*deg;
	return n;
}

LIB1_API int factorial(int n)
{
	int a = 1;
	for (int i = 1; i <= n; i++)
	{
		a = a*i;
	}
	return a;
}
