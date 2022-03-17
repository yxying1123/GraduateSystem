
// GraduateSystemView.cpp : CGraduateSystemView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "GraduateSystem.h"
#endif

#include "GraduateSystemDoc.h"
#include "GraduateSystemView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGraduateSystemView

IMPLEMENT_DYNCREATE(CGraduateSystemView, CView)

BEGIN_MESSAGE_MAP(CGraduateSystemView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGraduateSystemView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CGraduateSystemView ����/����

CGraduateSystemView::CGraduateSystemView()
{
	// TODO:  �ڴ˴���ӹ������

}

CGraduateSystemView::~CGraduateSystemView()
{
}

BOOL CGraduateSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CGraduateSystemView ����

void CGraduateSystemView::OnDraw(CDC* /*pDC*/)
{
	CGraduateSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CGraduateSystemView ��ӡ


void CGraduateSystemView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CGraduateSystemView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CGraduateSystemView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CGraduateSystemView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}

void CGraduateSystemView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGraduateSystemView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CGraduateSystemView ���

#ifdef _DEBUG
void CGraduateSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CGraduateSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraduateSystemDoc* CGraduateSystemView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraduateSystemDoc)));
	return (CGraduateSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CGraduateSystemView ��Ϣ�������
