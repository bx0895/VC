
// AMFC13_1View.h : CAMFC13_1View ��Ľӿ�
//

#pragma once

class CAMFC13_1Set;

class CAMFC13_1View : public CRecordView
{
protected: // �������л�����
	CAMFC13_1View();
	DECLARE_DYNCREATE(CAMFC13_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC13_1_FORM };
#endif
	CAMFC13_1Set* m_pSet;

// ����
public:
	CAMFC13_1Doc* GetDocument() const;

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
	virtual ~CAMFC13_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	long number;
};

#ifndef _DEBUG  // AMFC13_1View.cpp �еĵ��԰汾
inline CAMFC13_1Doc* CAMFC13_1View::GetDocument() const
   { return reinterpret_cast<CAMFC13_1Doc*>(m_pDocument); }
#endif

