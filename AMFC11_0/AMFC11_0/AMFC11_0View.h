
// AMFC11_0View.h : CAMFC11_0View 类的接口
//

#pragma once

class CAMFC11_0Set;

class CAMFC11_0View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC11_0View();
	DECLARE_DYNCREATE(CAMFC11_0View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_0_FORM };
#endif
	CAMFC11_0Set* m_pSet;

// 特性
public:
	CAMFC11_0Doc* GetDocument() const;

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
	virtual ~CAMFC11_0View();
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
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // AMFC11_0View.cpp 中的调试版本
inline CAMFC11_0Doc* CAMFC11_0View::GetDocument() const
   { return reinterpret_cast<CAMFC11_0Doc*>(m_pDocument); }
#endif

