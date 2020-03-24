
// example4_1View.h : Cexample4_1View 类的接口
//

#pragma once


class Cexample4_1View : public CView
{
protected: // 仅从序列化创建
	Cexample4_1View();
	DECLARE_DYNCREATE(Cexample4_1View)

// 特性
public:
	Cexample4_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample4_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRadius();
	afx_msg void OnRadiuscolor();
//	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // example4_1View.cpp 中的调试版本
inline Cexample4_1Doc* Cexample4_1View::GetDocument() const
   { return reinterpret_cast<Cexample4_1Doc*>(m_pDocument); }
#endif

