
// example8View.h : Cexample8View 类的接口
//

#pragma once


class Cexample8View : public CView
{
protected: // 仅从序列化创建
	Cexample8View();
	DECLARE_DYNCREATE(Cexample8View)

// 特性
public:
	Cexample8Doc* GetDocument() const;

// 操作
public:
	int show;
	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPuout();
	afx_msg void OnClose();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example8View.cpp 中的调试版本
inline Cexample8Doc* Cexample8View::GetDocument() const
   { return reinterpret_cast<Cexample8Doc*>(m_pDocument); }
#endif

