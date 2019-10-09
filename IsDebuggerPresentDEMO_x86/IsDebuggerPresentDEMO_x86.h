
// IsDebuggerPresentDEMO_x86.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CIsDebuggerPresentDEMO_x86App:
// See IsDebuggerPresentDEMO_x86.cpp for the implementation of this class
//

class CIsDebuggerPresentDEMO_x86App : public CWinApp
{
public:
	CIsDebuggerPresentDEMO_x86App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CIsDebuggerPresentDEMO_x86App theApp;