
// AMFC10_2Doc.h : CAMFC10_2Doc 类的接口
//


#pragma once
#include "AMFC10_2Set.h"


class CAMFC10_2Doc : public CDocument
{
protected: // 仅从序列化创建
	CAMFC10_2Doc();
	DECLARE_DYNCREATE(CAMFC10_2Doc)

// 特性
public:
	CAMFC10_2Set m_AMFC10_2Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CAMFC10_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
