
// AMFC11_0View.h : CAMFC11_0View ��Ľӿ�
//

#pragma once

class CAMFC11_0Set;

class CAMFC11_0View : public CRecordView
{
protected: // �������л�����
	CAMFC11_0View();
	DECLARE_DYNCREATE(CAMFC11_0View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_0_FORM };
#endif
	CAMFC11_0Set* m_pSet;

// ����
public:
	CAMFC11_0Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CAMFC11_0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // AMFC11_0View.cpp �еĵ��԰汾
inline CAMFC11_0Doc* CAMFC11_0View::GetDocument() const
   { return reinterpret_cast<CAMFC11_0Doc*>(m_pDocument); }
#endif

