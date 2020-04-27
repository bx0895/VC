
// AMFC9_1View.h : CAMFC9_1View 类的接口
//

#pragma once


class CAMFC9_1View : public CView
{
protected: // 仅从序列化创建
	CAMFC9_1View();
	DECLARE_DYNCREATE(CAMFC9_1View)

// 特性
public:
	CAMFC9_1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CAMFC9_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
	afx_msg void OnPop();
};

#ifndef _DEBUG  // AMFC9_1View.cpp 中的调试版本
inline CAMFC9_1Doc* CAMFC9_1View::GetDocument() const
   { return reinterpret_cast<CAMFC9_1Doc*>(m_pDocument); }
#endif

