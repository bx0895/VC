
// MFC1View.h : CMFC1View 类的接口
//

#pragma once


class CMFC1View : public CView
{
protected: // 仅从序列化创建
	CMFC1View();
	DECLARE_DYNCREATE(CMFC1View)

// 特性
public:
	CMFC1Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	bool set;
	int x;
	int y;
	int z;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnSize();
	afx_msg void OnColor();
};

#ifndef _DEBUG  // MFC1View.cpp 中的调试版本
inline CMFC1Doc* CMFC1View::GetDocument() const
   { return reinterpret_cast<CMFC1Doc*>(m_pDocument); }
#endif

