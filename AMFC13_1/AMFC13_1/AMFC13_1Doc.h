
// AMFC13_1Doc.h : CAMFC13_1Doc ��Ľӿ�
//


#pragma once
#include "AMFC13_1Set.h"


class CAMFC13_1Doc : public CDocument
{
protected: // �������л�����
	CAMFC13_1Doc();
	DECLARE_DYNCREATE(CAMFC13_1Doc)

// ����
public:
	CAMFC13_1Set m_AMFC13_1Set;

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
	virtual ~CAMFC13_1Doc();
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
