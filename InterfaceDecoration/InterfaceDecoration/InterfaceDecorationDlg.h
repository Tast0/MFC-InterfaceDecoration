
// InterfaceDecorationDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CInterfaceDecorationDlg 对话框
class CInterfaceDecorationDlg : public CDialogEx
{
// 构造
public:
	CInterfaceDecorationDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_INTERFACEDECORATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CButton m_Add;
	CButton m_Del;
	CButton m_Mod;
};
