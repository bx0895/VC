
// example2.2View.h : Cexample22View 类的接口
//

#pragma once


class Cexample22View : public CView
{
protected: // 仅从序列化创建
	Cexample22View();
	DECLARE_DYNCREATE(Cexample22View)

// 特性
public:
	Cexample22Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;//构造数组对象，数据类型为CRect

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample22View();
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
};

#ifndef _DEBUG  // example2.2View.cpp 中的调试版本
inline Cexample22Doc* Cexample22View::GetDocument() const
   { return reinterpret_cast<Cexample22Doc*>(m_pDocument); }
#endif

