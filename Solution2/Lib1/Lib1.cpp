// Lib1.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Lib1.h"


// ���ǵ���������һ��ʾ��
LIB1_API int nLib1=0;

// ���ǵ���������һ��ʾ����
LIB1_API int fnLib1(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Lib1.h
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
