
// InterfaceDecorationDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CInterfaceDecorationDlg �Ի���
class CInterfaceDecorationDlg : public CDialogEx
{
// ����
public:
	CInterfaceDecorationDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_INTERFACEDECORATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
