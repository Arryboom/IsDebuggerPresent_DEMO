
// IsDebuggerPresentDEMO_x64Dlg.h : header file
//

#pragma once


// CIsDebuggerPresentDEMO_x64Dlg dialog
class CIsDebuggerPresentDEMO_x64Dlg : public CDialogEx
{
// Construction
public:
	CIsDebuggerPresentDEMO_x64Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ISDEBUGGERPRESENTDEMO_X64_DIALOG };

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
	afx_msg void OnBnClickedButton1();
};
