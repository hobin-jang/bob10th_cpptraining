#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"
#include "DlgSuper.h"

class CSceneSuper : public CDlgSuper
{
protected:
	std::list<CGameObjectSuper*> m_listObject;

	CSceneSuper(void);
	virtual ~CSceneSuper(void);

	virtual void OnCreate(void);
	virtual void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	virtual void OnDrawWorld(CDisplayBuffer& vecBuffer);

public:
	virtual void AddObject(CGameObjectSuper* pChild);
};

