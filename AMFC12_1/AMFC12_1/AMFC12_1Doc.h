
// AMFC12_1Doc.h : CAMFC12_1Doc ��Ľӿ�
//


#pragma once
#include "AMFC12_1Set.h"


class CAMFC12_1Doc : public CDocument
{
protected: // �������л�����
	CAMFC12_1Doc();
	DECLARE_DYNCREATE(CAMFC12_1Doc)

// ����
public:
	CAMFC12_1Set m_AMFC12_1Set;

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
	virtual ~CAMFC12_1Doc();
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
