
// AMFC9-2Doc.cpp : CAMFC92Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "AMFC9-2.h"
#endif

#include "AMFC9-2Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CAMFC92Doc

IMPLEMENT_DYNCREATE(CAMFC92Doc, CDocument)

BEGIN_MESSAGE_MAP(CAMFC92Doc, CDocument)
END_MESSAGE_MAP()


// CAMFC92Doc ����/����

CAMFC92Doc::CAMFC92Doc()
{
	// TODO: �ڴ����һ���Թ������
	 x1 = 300;   x2 = 700;
	 y1 = 100;   y2 = 400;
	 r = 200;  g = 150;  b = 0;
	 cr.top = y1;  cr.left = x1;
	 cr.bottom = y2; cr.right = x2;
}

CAMFC92Doc::~CAMFC92Doc()
{
}

BOOL CAMFC92Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CAMFC92Doc ���л�

void CAMFC92Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
		//ar << cr.top << cr.left << cr.bottom << cr.left;
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
		//ar >> cr.top >> cr.left >> cr.bottom >> cr.left;
	}
	ca.Serialize(ar);
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CAMFC92Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CAMFC92Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CAMFC92Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CAMFC92Doc ���

#ifdef _DEBUG
void CAMFC92Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CAMFC92Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CAMFC92Doc ����
