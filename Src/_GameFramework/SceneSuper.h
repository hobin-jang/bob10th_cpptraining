#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"
#include "UISuper.h"

class CSceneSuper
{
	std::list<CUISuper*> m_listUI;

protected:
	CSceneSuper(void);

	void AddUI(CUISuper* pNewUI) { m_listUI.push_back(pNewUI); }

public:
	virtual void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	virtual void OnUpdate(double dElapsedTime);
	virtual void OnDrawWorld(std::vector<std::string>& vecBuffer);
	virtual void OnDrawUI(std::vector<std::string>& vecBuffer);
};

