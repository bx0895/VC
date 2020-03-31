
// example7View.h : Cexample7View 类的接口
//

#pragma once


class Cexample7View : public CView
{
protected: // 仅从序列化创建
	Cexample7View();
	DECLARE_DYNCREATE(Cexample7View)

// 特性
public:
	Cexample7Doc* GetDocument() const;

// 操作
public:
	CString m_strLine;
private: CPoint m_point;
    CRect cr;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexample7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif


protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // example7View.cpp 中的调试版本
inline Cexample7Doc* Cexample7View::GetDocument() const
   { return reinterpret_cast<Cexample7Doc*>(m_pDocument); }
#endif

