
// AMFC13_1View.h : CAMFC13_1View 类的接口
//

#pragma once

class CAMFC13_1Set;

class CAMFC13_1View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC13_1View();
	DECLARE_DYNCREATE(CAMFC13_1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC13_1_FORM };
#endif
	CAMFC13_1Set* m_pSet;

// 特性
public:
	CAMFC13_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CAMFC13_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	long number;
};

#ifndef _DEBUG  // AMFC13_1View.cpp 中的调试版本
inline CAMFC13_1Doc* CAMFC13_1View::GetDocument() const
   { return reinterpret_cast<CAMFC13_1Doc*>(m_pDocument); }
#endif

