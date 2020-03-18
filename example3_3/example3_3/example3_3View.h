
// example3_3View.h : Cexample3_3View 类的接口
//

#pragma once


class Cexample3_3View : public CView
{
protected: // 仅从序列化创建
	Cexample3_3View();
	DECLARE_DYNCREATE(Cexample3_3View)

// 特性
public:
	Cexample3_3Doc* GetDocument() const;

// 操作
public:
	bool set;
	bool T;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample3_3View();
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
};

#ifndef _DEBUG  // example3_3View.cpp 中的调试版本
inline Cexample3_3Doc* Cexample3_3View::GetDocument() const
   { return reinterpret_cast<Cexample3_3Doc*>(m_pDocument); }
#endif

