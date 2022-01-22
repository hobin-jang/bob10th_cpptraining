#pragma once

#include "Struct.h"

class CDlgSuper;
class CGameObjectSuper : public ST_GAME_OBJECT
{

protected:
	CGameObjectSuper(void);
	~CGameObjectSuper(void);

public:
	virtual void Create(CDlgSuper* pParent, int inX, int inY, int inZ);
	virtual void OnDraw(CDisplayBuffer& destBuffer);
};

