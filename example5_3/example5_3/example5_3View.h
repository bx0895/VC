
// example5_3View.h : Cexample5_3View 类的接口
//

#pragma once


class Cexample5_3View : public CView
{
protected: // 仅从序列化创建
	Cexample5_3View();
	DECLARE_DYNCREATE(Cexample5_3View)

// 特性
public:
	Cexample5_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample5_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnShowrectangle();
	afx_msg void OnShowelliptse();
};

#ifndef _DEBUG  // example5_3View.cpp 中的调试版本
inline Cexample5_3Doc* Cexample5_3View::GetDocument() const
   { return reinterpret_cast<Cexample5_3Doc*>(m_pDocument); }
#endif

