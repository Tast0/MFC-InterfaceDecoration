
// InterfaceDecoration.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInterfaceDecorationApp: 
// �йش����ʵ�֣������ InterfaceDecoration.cpp
//

class CInterfaceDecorationApp : public CWinApp
{
public:
	CInterfaceDecorationApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CInterfaceDecorationApp theApp;