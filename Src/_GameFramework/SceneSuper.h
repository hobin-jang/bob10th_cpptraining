#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"
#include "UISuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

class CSceneSuper
{
	static CKeyInput m_Input;
	CCamera m_Camera;
	CConsoleOutput m_Output;

	std::list<CUISuper*> m_listUI;
	bool m_bIsEndded;
	int m_nExitCode;

protected:
	CSceneSuper(void);
	virtual ~CSceneSuper(void);

	virtual void Close(int nExitCode);
	virtual void AddUI(CUISuper* pNewUI);

	virtual void OnCreate(void);
	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(double dElapsedTime);
	virtual void OnDrawWorld(std::vector<std::string>& vecBuffer);
	virtual void OnDrawUI(std::vector<std::string>& vecBuffer);

public:
	virtual int DoModal(void);
};

