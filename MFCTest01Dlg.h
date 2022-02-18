// MFCTest01Dlg.h : header file
//

#pragma once


// CMFCTest01Dlg dialog
class CMFCTest01Dlg : public CDialog
{
private:
	CPoint rect_start_pos;
// Construction
public:
	CMFCTest01Dlg(CWnd* pParent = NULL);	// standard constructor


// Dialog Data

	enum { IDD = IDD_MFCTEST01_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
