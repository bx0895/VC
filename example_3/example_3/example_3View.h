
// example_3View.h : Cexample_3View 类的接口
//

#pragma once


class Cexample_3View : public CView
{
protected: // 仅从序列化创建
	Cexample_3View();
	DECLARE_DYNCREATE(Cexample_3View)

// 特性
public:
	Cexample_3Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	
	int t;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example_3View.cpp 中的调试版本
inline Cexample_3Doc* Cexample_3View::GetDocument() const
   { return reinterpret_cast<Cexample_3Doc*>(m_pDocument); }
#endif

