#pragma once

class CTestScene : public CSceneSuper
{
	CDlgSuper* m_pDlg;
public:
	CTestScene(CDlgSuper* pDlg);
	~CTestScene(void);

	void OnCreate(void);
};

