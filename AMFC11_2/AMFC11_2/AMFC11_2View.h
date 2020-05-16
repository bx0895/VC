
// AMFC11_2View.h : CAMFC11_2View 类的接口
//

#pragma once

class CAMFC11_2Set;

class CAMFC11_2View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC11_2View();
	DECLARE_DYNCREATE(CAMFC11_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_2_FORM };
#endif
	CAMFC11_2Set* m_pSet;

// 特性
public:
	CAMFC11_2Doc* GetDocument() const;

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
	virtual ~CAMFC11_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	long number;
	long age;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // AMFC11_2View.cpp 中的调试版本
inline CAMFC11_2Doc* CAMFC11_2View::GetDocument() const
   { return reinterpret_cast<CAMFC11_2Doc*>(m_pDocument); }
#endif

