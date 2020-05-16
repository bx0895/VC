
// AMFC11_3View.h : CAMFC11_3View ��Ľӿ�
//

#pragma once

class CAMFC11_3Set;

class CAMFC11_3View : public CRecordView
{
protected: // �������л�����
	CAMFC11_3View();
	DECLARE_DYNCREATE(CAMFC11_3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_3_FORM };
#endif
	CAMFC11_3Set* m_pSet;

// ����
public:
	CAMFC11_3Doc* GetDocument() const;

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
	virtual ~CAMFC11_3View();
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
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // AMFC11_3View.cpp �еĵ��԰汾
inline CAMFC11_3Doc* CAMFC11_3View::GetDocument() const
   { return reinterpret_cast<CAMFC11_3Doc*>(m_pDocument); }
#endif

