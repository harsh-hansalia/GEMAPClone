
// GEMAPClone.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CGEMAPCloneApp:
// See GEMAPClone.cpp for the implementation of this class
//

class CGEMAPCloneApp : public CWinApp
{
public:
	CGEMAPCloneApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CGEMAPCloneApp theApp;
