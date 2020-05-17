
// MFC0View.h : CMFC0View 类的接口
//

#pragma once


class CMFC0View : public CView
{
protected: // 仅从序列化创建
	CMFC0View();
	DECLARE_DYNCREATE(CMFC0View)

// 特性
public:
	CMFC0Doc* GetDocument() const;

// 操作
public:
	CString filename;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPutmydlg2();
	
};

#ifndef _DEBUG  // MFC0View.cpp 中的调试版本
inline CMFC0Doc* CMFC0View::GetDocument() const
   { return reinterpret_cast<CMFC0Doc*>(m_pDocument); }
#endif

