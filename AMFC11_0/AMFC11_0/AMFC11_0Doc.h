
// AMFC11_0Doc.h : CAMFC11_0Doc ��Ľӿ�
//


#pragma once
#include "AMFC11_0Set.h"


class CAMFC11_0Doc : public CDocument
{
protected: // �������л�����
	CAMFC11_0Doc();
	DECLARE_DYNCREATE(CAMFC11_0Doc)

// ����
public:
	CAMFC11_0Set m_AMFC11_0Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CAMFC11_0Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
