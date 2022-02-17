#pragma once

#include "Struct.h"
#include "DisplayBuffer.h"

class CSceneSuper;
class CGameObjectSuper
{
public:
	short x;
	short y;
	short z;    // floor
	char cDir;  // GAMEKEY_LEFT or RIGHT, UP, DOWN
	char cPatch;

	CGameObjectSuper(void);
	~CGameObjectSuper(void);

	virtual void Create(CSceneSuper* pParent);
	virtual void OnDrawUI(CDisplayBuffer& destBuffer);

	virtual ST_POINT3 GetPos(void);
	virtual ST_POINT3 GetFrontPos(void);
};

