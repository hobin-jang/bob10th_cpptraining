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
	CDlgSuper* m_pParent;
	std::list<CUISuper*> m_listUI;

	bool m_bIsClosed;
	int m_nExitCode;

	CDlgSuper(CDlgSuper* pParent = nullptr);
	virtual ~CDlgSuper(void);

	virtual void Close(int nExitCode);

	virtual void OnCreate(void);
	virtual void OnClose(void);
	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	virtual void OnDrawUI(CDisplayBuffer& vecBuffer);

public:
	virtual void SetParent(CDlgSuper* pParent);
	virtual int DoModal(void);
	virtual void DrawUI(CDisplayBuffer& vecBuffer);
	virtual void DrawWorld(CDisplayBuffer& vecBuffer);

protected:
	friend class CUISuper;
	friend class CGameObjectSuper;
	virtual void AddUI(CUISuper* pChild);
};

