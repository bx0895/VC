
// AMFC11_2Doc.h : CAMFC11_2Doc ��Ľӿ�
//


#pragma once
#include "AMFC11_2Set.h"


class CAMFC11_2Doc : public CDocument
{
protected: // �������л�����
	CAMFC11_2Doc();
	DECLARE_DYNCREATE(CAMFC11_2Doc)

// ����
public:
	CAMFC11_2Set m_AMFC11_2Set;

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
	virtual ~CAMFC11_2Doc();
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
