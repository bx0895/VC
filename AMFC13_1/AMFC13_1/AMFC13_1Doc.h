
// AMFC13_1Doc.h : CAMFC13_1Doc 类的接口
//


#pragma once
#include "AMFC13_1Set.h"


class CAMFC13_1Doc : public CDocument
{
protected: // 仅从序列化创建
	CAMFC13_1Doc();
	DECLARE_DYNCREATE(CAMFC13_1Doc)

// 特性
public:
	CAMFC13_1Set m_AMFC13_1Set;

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
	virtual ~CAMFC13_1Doc();
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
