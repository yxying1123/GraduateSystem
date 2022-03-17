
// GraduateSystemView.h : CGraduateSystemView ��Ľӿ�
//

#pragma once


class CGraduateSystemView : public CView
{
protected: // �������л�����
	CGraduateSystemView();
	DECLARE_DYNCREATE(CGraduateSystemView)

// ����
public:
	CGraduateSystemDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CGraduateSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // GraduateSystemView.cpp �еĵ��԰汾
inline CGraduateSystemDoc* CGraduateSystemView::GetDocument() const
   { return reinterpret_cast<CGraduateSystemDoc*>(m_pDocument); }
#endif

