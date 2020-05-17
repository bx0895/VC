
// AMFC12_1Set.cpp : CAMFC12_1Set ���ʵ��
//

#include "stdafx.h"
#include "AMFC12_1.h"
#include "AMFC12_1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC12_1Set ʵ��

// ���������� 2020��5��17��, 16:03

IMPLEMENT_DYNAMIC(CAMFC12_1Set, CRecordset)

CAMFC12_1Set::CAMFC12_1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0.0;
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_6 = L"";
	m_nFields = 7;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CAMFC12_1Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x5e93_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x7f16\x7a0b\x8d44\x6599\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CAMFC12_1Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void CAMFC12_1Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Double(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);
	RFX_Text(pFX, _T("[�ֶ�6]"), m_6);

}
/////////////////////////////////////////////////////////////////////////////
// CAMFC12_1Set ���

#ifdef _DEBUG
void CAMFC12_1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAMFC12_1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

