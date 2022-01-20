#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"
#include "UISuper.h"

class CSceneSuper
{
	std::list<CUISuper*> m_listUI;
	bool m_bIsEndded;
	int m_nExitCode;

protected:
	CSceneSuper(void);
	virtual ~CSceneSuper(void);

	void AddUI(CUISuper* pNewUI) { m_listUI.push_back(pNewUI); }
	void Close(int nExitCode);

public:
	int DoModal(void);

	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(double dElapsedTime);
	virtual void OnDrawWorld(std::vector<std::string>& vecBuffer);
	virtual void OnDrawUI(std::vector<std::string>& vecBuffer);
};

