#pragma once

#include "UISuper.h"
#include "GameObjectSuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

class CDlgSuper : public CUISuper
{
public:
	static DWORD FPS;
	static CKeyInput m_Input;
	static CConsoleOutput m_Output;
	static CCamera m_Camera;

protected:
	std::list<CUISuper*> m_listUI;
	std::list<CGameObjectSuper*> m_listObject;

	bool m_bIsEndded;
	int m_nExitCode;

	CDlgSuper(void);
	virtual ~CDlgSuper(void);

	virtual void Close(int nExitCode);

	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	virtual void OnDrawWorld(CDisplayBuffer& vecBuffer);
	virtual void OnDrawUI(CDisplayBuffer& vecBuffer);

public:
	virtual int DoModal(CDlgSuper* pParent);

private:
	friend class CUISuper;
	friend class CGameObjectSuper;
	virtual void AddUI(CUISuper* pNewUI);
	virtual void AddObject(CGameObjectSuper* pObject);

	void OnDraw(CDisplayBuffer& vecBuffer);
};

