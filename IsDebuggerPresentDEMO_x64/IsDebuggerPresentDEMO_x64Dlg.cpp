
// IsDebuggerPresentDEMO_x64Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "IsDebuggerPresentDEMO_x64.h"
#include "IsDebuggerPresentDEMO_x64Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIsDebuggerPresentDEMO_x64Dlg dialog



CIsDebuggerPresentDEMO_x64Dlg::CIsDebuggerPresentDEMO_x64Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CIsDebuggerPresentDEMO_x64Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CIsDebuggerPresentDEMO_x64Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CIsDebuggerPresentDEMO_x64Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CIsDebuggerPresentDEMO_x64Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CIsDebuggerPresentDEMO_x64Dlg message handlers

BOOL CIsDebuggerPresentDEMO_x64Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

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

void CIsDebuggerPresentDEMO_x64Dlg::OnPaint()
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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CIsDebuggerPresentDEMO_x64Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CIsDebuggerPresentDEMO_x64Dlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	// TODO: Add your control notification handler code here
	BOOL ISD;
	ISD = IsDebuggerPresent();
	char* thetrue = "true";
	WCHAR wszClassName[256];
	memset(wszClassName, 0, sizeof(wszClassName));
	MultiByteToWideChar(CP_ACP, 0, thetrue, strlen(thetrue) + 1, wszClassName,
		sizeof(wszClassName) / sizeof(wszClassName[0]));
	//
	char* theResult = "Result";
	WCHAR wszClassName2[256];
	memset(wszClassName2, 0, sizeof(wszClassName2));
	MultiByteToWideChar(CP_ACP, 0, theResult, strlen(theResult) + 1, wszClassName2,
		sizeof(wszClassName2) / sizeof(wszClassName2[0]));

	//
	char* thefalse = "false";
	WCHAR wszClassName3[256];
	memset(wszClassName3, 0, sizeof(wszClassName3));
	MultiByteToWideChar(CP_ACP, 0, thefalse, strlen(thefalse) + 1, wszClassName3,
		sizeof(wszClassName3) / sizeof(wszClassName3[0]));

	if (ISD){
		MessageBoxW(NULL, wszClassName, wszClassName2, MB_OK);
	}
	else{
		MessageBoxW(NULL, wszClassName3, wszClassName2, MB_OK);
	}
}
