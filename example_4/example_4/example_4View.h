
// example_4View.h : Cexample_4View 类的接口
//

#pragma once


class Cexample_4View : public CView
{
protected: // 仅从序列化创建
	Cexample_4View();
	DECLARE_DYNCREATE(Cexample_4View)

// 特性
public:
	Cexample_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // example_4View.cpp 中的调试版本
inline Cexample_4Doc* Cexample_4View::GetDocument() const
   { return reinterpret_cast<Cexample_4Doc*>(m_pDocument); }
#endif

