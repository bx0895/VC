
// AMFC11_2View.h : CAMFC11_2View ��Ľӿ�
//

#pragma once

class CAMFC11_2Set;

class CAMFC11_2View : public CRecordView
{
protected: // �������л�����
	CAMFC11_2View();
	DECLARE_DYNCREATE(CAMFC11_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_2_FORM };
#endif
	CAMFC11_2Set* m_pSet;

// ����
public:
	CAMFC11_2Doc* GetDocument() const;

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
	virtual ~CAMFC11_2View();
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
	long number;
	long age;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // AMFC11_2View.cpp �еĵ��԰汾
inline CAMFC11_2Doc* CAMFC11_2View::GetDocument() const
   { return reinterpret_cast<CAMFC11_2Doc*>(m_pDocument); }
#endif

