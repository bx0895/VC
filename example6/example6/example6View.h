
// example6View.h : Cexample6View 类的接口
//

#pragma once


class Cexample6View : public CView
{
protected: // 仅从序列化创建
	Cexample6View();
	DECLARE_DYNCREATE(Cexample6View)

// 特性
public:
	Cexample6Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample6View();
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
};

#ifndef _DEBUG  // example6View.cpp 中的调试版本
inline Cexample6Doc* Cexample6View::GetDocument() const
   { return reinterpret_cast<Cexample6Doc*>(m_pDocument); }
#endif

