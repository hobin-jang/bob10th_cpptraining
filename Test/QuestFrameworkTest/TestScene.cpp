#include "stdafx.h"
#include "TestScene.h"

CTestScene::CTestScene(CDlgSuper* pDlg)
	: CSceneSuper()
	, m_pDlg(pDlg)
{
	m_pDlg->SetParent(this);
	AddUI(m_pDlg);
}

CTestScene::~CTestScene(void)
{
}

void CTestScene::OnCreate(void)
{
	int nResult = m_pDlg->DoModal(&g_Input);
	if (0 == nResult)
		printf("����!!\n");
	else
		printf("���� �Ф�\n");
	Close(nResult);
}
