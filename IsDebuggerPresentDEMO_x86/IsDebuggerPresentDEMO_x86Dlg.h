
// IsDebuggerPresentDEMO_x86Dlg.h : header file
//

#pragma once


// CIsDebuggerPresentDEMO_x86Dlg dialog
class CIsDebuggerPresentDEMO_x86Dlg : public CDialogEx
{
// Construction
public:
	CIsDebuggerPresentDEMO_x86Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ISDEBUGGERPRESENTDEMO_X86_DIALOG };

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
