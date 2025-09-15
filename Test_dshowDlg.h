
// Test_dshowDlg.h : header file
//

#pragma once

#include "../../Common/DirectShow/dshow.h"

// CTest_dshowDlg dialog
class CTest_dshowDlg : public CDialogEx
{
// Construction
public:
	CTest_dshowDlg(CWnd* pParent = NULL);	// standard constructor

	CDShow		m_media;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEST_DSHOW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnDropFiles(HDROP hDropInfo);
};
