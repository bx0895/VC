
// AMFC10_2View.h : CAMFC10_2View 类的接口
//

#pragma once

class CAMFC10_2Set;

class CAMFC10_2View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC10_2View();
	DECLARE_DYNCREATE(CAMFC10_2View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC10_2_FORM };
#endif
	CAMFC10_2Set* m_pSet;

// 特性
public:
	CAMFC10_2Doc* GetDocument() const;

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
	virtual ~CAMFC10_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AMFC10_2View.cpp 中的调试版本
inline CAMFC10_2Doc* CAMFC10_2View::GetDocument() const
   { return reinterpret_cast<CAMFC10_2Doc*>(m_pDocument); }
#endif

