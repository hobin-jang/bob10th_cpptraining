#pragma once

#include "UISuper.h"
#include "GameObjectSuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

class CDlgSuper
{
	CDlgSuper* m_pParent;

protected:
	static CKeyInput m_Input;
	CCamera m_Camera;
	CConsoleOutput m_Output;

	std::list<CUISuper*> m_listUI;
	std::list<CGameObjectSuper*> m_listObject;

	bool m_bIsEndded;
	int m_nExitCode;

	CDlgSuper(CDlgSuper* pParent);
	virtual ~CDlgSuper(void);

	virtual void Close(int nExitCode);

	virtual void OnCreate(void);
	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(double dElapsedTime);
	virtual void OnDrawWorld(CDisplayBuffer& vecBuffer);
	virtual void OnDrawUI(CDisplayBuffer& vecBuffer);

public:
	virtual int DoModal(void);
	virtual void AddUI(CUISuper* pNewUI);
	virtual void AddObject(CGameObjectSuper* pObject);
};

