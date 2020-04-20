
// example9_1View.h : Cexample9_1View 类的接口
//

#pragma once


class Cexample9_1View : public CView
{
protected: // 仅从序列化创建
	Cexample9_1View();
	DECLARE_DYNCREATE(Cexample9_1View)

// 特性
public:
	Cexample9_1Doc* GetDocument() const;

// 操作
public:
	CString s;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample9_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPush();
};

#ifndef _DEBUG  // example9_1View.cpp 中的调试版本
inline Cexample9_1Doc* Cexample9_1View::GetDocument() const
   { return reinterpret_cast<Cexample9_1Doc*>(m_pDocument); }
#endif

