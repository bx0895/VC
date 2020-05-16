
// AMFC11_3View.h : CAMFC11_3View 类的接口
//

#pragma once

class CAMFC11_3Set;

class CAMFC11_3View : public CRecordView
{
protected: // 仅从序列化创建
	CAMFC11_3View();
	DECLARE_DYNCREATE(CAMFC11_3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_AMFC11_3_FORM };
#endif
	CAMFC11_3Set* m_pSet;

// 特性
public:
	CAMFC11_3Doc* GetDocument() const;

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
	virtual ~CAMFC11_3View();
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
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // AMFC11_3View.cpp 中的调试版本
inline CAMFC11_3Doc* CAMFC11_3View::GetDocument() const
   { return reinterpret_cast<CAMFC11_3Doc*>(m_pDocument); }
#endif

