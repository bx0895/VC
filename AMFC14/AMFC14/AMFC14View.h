
// AMFC14View.h : CAMFC14View 类的接口
//

#pragma once

class CAMFC14Set;

class CAMFC14View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC14View();
	DECLARE_DYNCREATE(CAMFC14View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC14_FORM };
#endif
	CAMFC14Set* m_pSet;

// 特性
public:
	CAMFC14Doc* GetDocument() const;

// 操作
public:
	void draw_pic(CString str);
// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CAMFC14View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // AMFC14View.cpp 中的调试版本
inline CAMFC14Doc* CAMFC14View::GetDocument() const
   { return reinterpret_cast<CAMFC14Doc*>(m_pDocument); }
#endif

