
// AMFC13_1Set.cpp : CAMFC13_1Set ���ʵ��
//

#include "stdafx.h"
#include "AMFC13_1.h"
#include "AMFC13_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC13_1Set ʵ��

// ���������� 2020��5��19��, 20:57

IMPLEMENT_DYNAMIC(CAMFC13_1Set, CRecordset)

CAMFC13_1Set::CAMFC13_1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CAMFC13_1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x5e93_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x7f16\x7a0b\x8d44\x6599\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CAMFC13_1Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void CAMFC13_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CAMFC13_1Set ���

#ifdef _DEBUG
void CAMFC13_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAMFC13_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

