
// AMFC10_2View.h : CAMFC10_2View ��Ľӿ�
//

#pragma once

class CAMFC10_2Set;

class CAMFC10_2View : public CRecordView
{
protected: // �������л�����
	CAMFC10_2View();
	DECLARE_DYNCREATE(CAMFC10_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC10_2_FORM };
#endif
	CAMFC10_2Set* m_pSet;

// ����
public:
	CAMFC10_2Doc* GetDocument() const;

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
	virtual ~CAMFC10_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AMFC10_2View.cpp �еĵ��԰汾
inline CAMFC10_2Doc* CAMFC10_2View::GetDocument() const
   { return reinterpret_cast<CAMFC10_2Doc*>(m_pDocument); }
#endif

