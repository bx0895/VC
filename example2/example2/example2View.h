
// example2View.h : Cexample2View 类的接口
//

#pragma once


class Cexample2View : public CView
{
protected: // 仅从序列化创建
	Cexample2View();
	DECLARE_DYNCREATE(Cexample2View)

// 特性
public:
	Cexample2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example2View.cpp 中的调试版本
inline Cexample2Doc* Cexample2View::GetDocument() const
   { return reinterpret_cast<Cexample2Doc*>(m_pDocument); }
#endif

