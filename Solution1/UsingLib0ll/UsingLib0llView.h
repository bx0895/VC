
// UsingLib0llView.h : CUsingLib0llView 类的接口
//

#pragma once


class CUsingLib0llView : public CView
{
protected: // 仅从序列化创建
	CUsingLib0llView();
	DECLARE_DYNCREATE(CUsingLib0llView)

// 特性
public:
	CUsingLib0llDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingLib0llView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLib0llView.cpp 中的调试版本
inline CUsingLib0llDoc* CUsingLib0llView::GetDocument() const
   { return reinterpret_cast<CUsingLib0llDoc*>(m_pDocument); }
#endif

