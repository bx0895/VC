
// AMFC11_0Set.cpp : CAMFC11_0Set ���ʵ��
//

#include "stdafx.h"
#include "AMFC11_0.h"
#include "AMFC11_0Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAMFC11_0Set ʵ��

// ���������� 2020��5��11��, 22:32

IMPLEMENT_DYNAMIC(CAMFC11_0Set, CRecordset)

CAMFC11_0Set::CAMFC11_0Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = 0;
	m_3 = 0;
	m_4 = 0.0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CAMFC11_0Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x5e93_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x7f16\x7a0b\x8d44\x6599\\Database4.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CAMFC11_0Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CAMFC11_0Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Long(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Long(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Double(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CAMFC11_0Set ���

#ifdef _DEBUG
void CAMFC11_0Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CAMFC11_0Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

