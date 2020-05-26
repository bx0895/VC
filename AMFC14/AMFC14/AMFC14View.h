
// AMFC14View.h : CAMFC14View ��Ľӿ�
//

#pragma once

class CAMFC14Set;

class CAMFC14View : public CRecordView
{
protected: // �������л�����
	CAMFC14View();
	DECLARE_DYNCREATE(CAMFC14View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC14_FORM };
#endif
	CAMFC14Set* m_pSet;

// ����
public:
	CAMFC14Doc* GetDocument() const;

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
	virtual ~CAMFC14View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit3();
	
	CString name;
	CString studentno;
	CString subject;
	CString sex;
	CString age;
	CString phone;
	CString address;
	afx_msg void OnShowPicture();
//	afx_msg void OnPaint();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnAdd();
	afx_msg void OnAlter();
	afx_msg void OnDelete();
	afx_msg void OnSearch();
	afx_msg void OnRank();
	afx_msg void OnRecord();
};

#ifndef _DEBUG  // AMFC14View.cpp �еĵ��԰汾
inline CAMFC14Doc* CAMFC14View::GetDocument() const
   { return reinterpret_cast<CAMFC14Doc*>(m_pDocument); }
#endif

