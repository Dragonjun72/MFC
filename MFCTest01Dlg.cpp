// MFCTest01Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCTest01.h"
#include "MFCTest01Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCTest01Dlg dialog




CMFCTest01Dlg::CMFCTest01Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCTest01Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCTest01Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCTest01Dlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_NCLBUTTONDOWN()
	ON_WM_NCLBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()


// CMFCTest01Dlg message handlers

BOOL CMFCTest01Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCTest01Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCTest01Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CMFCTest01Dlg::OnNcLButtonDown(UINT nHitTest, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	rect_start_pos = point;

	CDialog::OnNcLButtonDown(nHitTest, point);
}

void CMFCTest01Dlg::OnNcLButtonUp(UINT nHitTest, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.

	CClientDC dc(this);
	CPen my_pen(PS_SOLID, 5, RGB(0, 0, 255));
	dc.SelectObject(&my_pen);
	SelectObject(dc, GetStockObject(NULL_BRUSH));

	if(nHitTest & MK_CONTROL)
	{
		dc.Ellipse(rect_start_pos.x, rect_start_pos.y, point.x, point.y);
	}
	else{
		dc.Rectangle(rect_start_pos.x, rect_start_pos.y, point.x, point.y);
	}

	CDialog::OnNcLButtonUp(nHitTest, point);
}

void CMFCTest01Dlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	rect_start_pos = point;

	CDialog::OnLButtonDown(nFlags, point);
}

void CMFCTest01Dlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CClientDC dc(this);
	CPen my_pen(PS_SOLID, 5, RGB(0, 0, 255));
	dc.SelectObject(&my_pen);
	SelectObject(dc, GetStockObject(NULL_BRUSH));

	if(nFlags & MK_CONTROL)
	{
		dc.Ellipse(rect_start_pos.x, rect_start_pos.y, point.x, point.y);
	}
	else{
		dc.Rectangle(rect_start_pos.x, rect_start_pos.y, point.x, point.y);
	}

	CDialog::OnLButtonUp(nFlags, point);
}
