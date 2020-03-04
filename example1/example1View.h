
// example1View.h : Cexample1View 类的接口
//

#pragma once


class Cexample1View : public CView
{
protected: // 仅从序列化创建
	Cexample1View();
	DECLARE_DYNCREATE(Cexample1View)

// 特性
public:
	Cexample1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cexample1View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example1View.cpp 中的调试版本
inline Cexample1Doc* Cexample1View::GetDocument() const
   { return reinterpret_cast<Cexample1Doc*>(m_pDocument); }
#endif

