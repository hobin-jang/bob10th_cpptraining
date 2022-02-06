#pragma once

#include "Struct.h"
#include "DisplayBuffer.h"

class CDlgSuper;
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

	virtual void Create(CDlgSuper* pParent, int inX, int inY, int inZ);
	virtual void OnDraw(CDisplayBuffer& destBuffer);

	virtual ST_POINT GetFrontPos(void);
	virtual ST_POINT3 GetFrontPos3(void);
};

