
// example5_2View.h : Cexample5_2View 类的接口
//

#pragma once


class Cexample5_2View : public CView
{
protected: // 仅从序列化创建
	Cexample5_2View();
	DECLARE_DYNCREATE(Cexample5_2View)

// 特性
public:
	Cexample5_2Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_Width;
	int m_Height;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample5_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // example5_2View.cpp 中的调试版本
inline Cexample5_2Doc* Cexample5_2View::GetDocument() const
   { return reinterpret_cast<Cexample5_2Doc*>(m_pDocument); }
#endif

