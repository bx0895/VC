
// AMFC9-2View.h : CAMFC92View 类的接口
//

#pragma once


class CAMFC92View : public CView
{
protected: // 仅从序列化创建
	CAMFC92View();
	DECLARE_DYNCREATE(CAMFC92View)

// 特性
public:
	CAMFC92Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CAMFC92View();
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

#ifndef _DEBUG  // AMFC9-2View.cpp 中的调试版本
inline CAMFC92Doc* CAMFC92View::GetDocument() const
   { return reinterpret_cast<CAMFC92Doc*>(m_pDocument); }
#endif

