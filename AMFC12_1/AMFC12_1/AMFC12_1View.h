
// AMFC12_1View.h : CAMFC12_1View ��Ľӿ�
//

#pragma once
#include "Mag.h"
class CAMFC12_1Set;

class CAMFC12_1View : public CRecordView
{
protected: // �������л�����
	CAMFC12_1View();
	DECLARE_DYNCREATE(CAMFC12_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC12_1_FORM };
#endif
	CAMFC12_1Set* m_pSet;

// ����
public:
	CAMFC12_1Doc* GetDocument() const;

// ����
public:
	void draw_pic(CString str);
// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CAMFC12_1View();
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
	double number;
	CString subjuct;
	CString birth;
	CString address;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // AMFC12_1View.cpp �еĵ��԰汾
inline CAMFC12_1Doc* CAMFC12_1View::GetDocument() const
   { return reinterpret_cast<CAMFC12_1Doc*>(m_pDocument); }
#endif

