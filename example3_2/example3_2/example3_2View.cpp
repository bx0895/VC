
// example3_2View.cpp : Cexample3_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "example3_2.h"
#endif

#include "example3_2Doc.h"
#include "example3_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexample3_2View

IMPLEMENT_DYNCREATE(Cexample3_2View, CView)

BEGIN_MESSAGE_MAP(Cexample3_2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexample3_2View ����/����

Cexample3_2View::Cexample3_2View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexample3_2View::~Cexample3_2View()
{
}

BOOL Cexample3_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexample3_2View ����

void Cexample3_2View::OnDraw(CDC* pDC)
{
	Cexample3_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	pDC->Rectangle(pDoc->m_crect);
}


// Cexample3_2View ���

#ifdef _DEBUG
void Cexample3_2View::AssertValid() const
{
	CView::AssertValid();
}

void Cexample3_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexample3_2Doc* Cexample3_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexample3_2Doc)));
	return (Cexample3_2Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexample3_2View ��Ϣ�������


void Cexample3_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexample3_2Doc* pDoc = GetDocument();
	CRect cr;
	GetClientRect(&cr);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crect.left > 0)
		{
			pDoc->m_crect.left -= 10;
			pDoc->m_crect.right -= 10;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crect.right <=(cr.right-cr.left))
		{
			pDoc->m_crect.left += 10;
			pDoc->m_crect.right += 10;
		}
		break;
	case VK_UP:
		if (pDoc->m_crect.top >0)
		{
			pDoc->m_crect.top -= 10;
			pDoc->m_crect.bottom -= 10;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crect.bottom <= (cr.bottom - cr.top))
		{
			pDoc->m_crect.top += 10;
			pDoc->m_crect.bottom += 10;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crect.left > 0&& pDoc->m_crect.left > 0)
		{
			pDoc->m_crect.top -= 10;
			pDoc->m_crect.left -= 10;
		}
		break;
	case VK_END:
		if (pDoc->m_crect.top <cr.bottom && pDoc->m_crect.left <cr.right)
		{
			pDoc->m_crect.top += 10;
			pDoc->m_crect.left += 10;
		}
	default:
		break;
	}
	InvalidateRect(NULL, TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cexample3_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	Cexample3_2Doc* pDoc = GetDocument();
	pDoc->m_crect.left = 600;
	pDoc->m_crect.top = 250;
	pDoc->m_crect.right = 800;
	pDoc->m_crect.bottom = 350;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}
