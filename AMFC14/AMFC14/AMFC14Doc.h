
// AMFC14Doc.h : CAMFC14Doc ��Ľӿ�
//


#pragma once
#include "AMFC14Set.h"


class CAMFC14Doc : public CDocument
{
protected: // �������л�����
	CAMFC14Doc();
	DECLARE_DYNCREATE(CAMFC14Doc)

// ����
public:
	CAMFC14Set m_AMFC14Set;

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
	virtual ~CAMFC14Doc();
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
