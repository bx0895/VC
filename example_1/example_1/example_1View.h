
// example_1View.h : Cexample_1View 类的接口
//

#pragma once


class Cexample_1View : public CView
{
protected: // 仅从序列化创建
	Cexample_1View();
	DECLARE_DYNCREATE(Cexample_1View)

// 特性
public:
	Cexample_1Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	int a;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example_1View.cpp 中的调试版本
inline Cexample_1Doc* Cexample_1View::GetDocument() const
   { return reinterpret_cast<Cexample_1Doc*>(m_pDocument); }
#endif

