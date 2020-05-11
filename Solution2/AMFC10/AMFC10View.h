
// AMFC10View.h : CAMFC10View 类的接口
//

#pragma once


class CAMFC10View : public CView
{
protected: // 仅从序列化创建
	CAMFC10View();
	DECLARE_DYNCREATE(CAMFC10View)

// 特性
public:
	CAMFC10Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CAMFC10View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // AMFC10View.cpp 中的调试版本
inline CAMFC10Doc* CAMFC10View::GetDocument() const
   { return reinterpret_cast<CAMFC10Doc*>(m_pDocument); }
#endif

