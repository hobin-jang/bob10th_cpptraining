#pragma once

#include "Setting.h"
#include "UISuper.h"
#include "GameObjectSuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

class CDlgSuper : public CUISuper
{
protected:
	std::list<CUISuper*> m_listUI;
	std::list<CGameObjectSuper*> m_listObject;

	bool m_bIsClosed;
	int m_nExitCode;

	CDlgSuper(void);
	virtual ~CDlgSuper(void);

	virtual void Close(int nExitCode);

	virtual void OnCreate(void);
	virtual void OnClose(void);
	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	virtual void OnDrawWorld(CDisplayBuffer& vecBuffer);
	virtual void OnDrawUI(CDisplayBuffer& vecBuffer);

public:
	virtual int DoModal(CDlgSuper* pParent);

private:
	friend class CUISuper;
	friend class CGameObjectSuper;
	virtual void AddUI(CUISuper* pChild);
	virtual void AddObject(CGameObjectSuper* pChild);

	void OnDraw(CDisplayBuffer& vecBuffer);
};

