// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIB1_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIB1_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LIB1_EXPORTS
#define LIB1_API __declspec(dllexport)
#else
#define LIB1_API __declspec(dllimport)
#endif

// �����Ǵ� Lib1.dll ������
class LIB1_API CLib1 {
public:
	CLib1(void);
	// TODO:  �ڴ�������ķ�����
};

extern LIB1_API int nLib1;

LIB1_API int fnLib1(void);

class LIB1_API FAC {
public:
	float convert(float deg);
};

 LIB1_API int factorial(int n);
