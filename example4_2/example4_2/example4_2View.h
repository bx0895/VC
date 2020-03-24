
// example4_2View.h : Cexample4_2View 类的接口
//

#pragma once


class Cexample4_2View : public CView
{
protected: // 仅从序列化创建
	Cexample4_2View();
	DECLARE_DYNCREATE(Cexample4_2View)

// 特性
public:
	Cexample4_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample4_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // example4_2View.cpp 中的调试版本
inline Cexample4_2Doc* Cexample4_2View::GetDocument() const
   { return reinterpret_cast<Cexample4_2Doc*>(m_pDocument); }
#endif

