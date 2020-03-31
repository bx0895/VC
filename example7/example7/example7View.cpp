
// example7View.cpp : Cexample7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example7.h"
#endif

#include "example7Doc.h"
#include "example7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample7View

IMPLEMENT_DYNCREATE(Cexample7View, CView)

BEGIN_MESSAGE_MAP(Cexample7View, CView)
	ON_WM_CREATE()
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample7View ����/����

Cexample7View::Cexample7View()
{
	// TODO: �ڴ˴���ӹ������
	m_strLine = "";
	m_point = 0;
	cr.top = 250;   cr.left = 300;
	cr.right = 450;  cr.bottom = 280;
}

Cexample7View::~Cexample7View()
{
}

BOOL Cexample7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample7View ����

void Cexample7View::OnDraw(CDC* pDC)
{
	Cexample7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
}


// Cexample7View ���

#ifdef _DEBUG
void Cexample7View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample7Doc* Cexample7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample7Doc)));
	return (Cexample7Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample7View ��Ϣ�������


int Cexample7View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	CreateSolidCaret(tm.tmAveCharWidth / 8, tm.tmHeight);
	ShowCaret();
	return 0;
}


void Cexample7View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	if (0x0d == nChar||m_point.x>=cr.right)
	{
		m_strLine.Empty();
		m_point.y += tm.tmHeight;
		cr.bottom += 30;
		InvalidateRect(NULL, TRUE);
	}
	else if (0x08 == nChar)
	{
		COLORREF clr = dc.SetTextColor(dc.GetBkColor());
		dc.TextOutW(m_point.x, m_point.y, m_strLine);
		m_strLine = m_strLine.Left(m_strLine.GetLength()-1);
		dc.SetTextColor(clr);
	}
	else 
	{
     m_strLine= m_strLine+(TCHAR)nChar;
	}
	
    
	CSize zs=dc.GetTextExtent(m_strLine);
	CPoint p;
	p.x = m_point.x + zs.cx;
	p.y = m_point.y;
	SetCaretPos(p);
	dc.TextOutW(m_point.x, m_point.y, m_strLine);
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Cexample7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	m_strLine.Empty();
	m_point = point;
	CView::OnLButtonDown(nFlags, point);
}
