#pragma once

#include "Struct.h"

class CDlgSuper;
class CGameObjectSuper : public ST_GAME_OBJECT
{

protected:
	CGameObjectSuper(void);
	~CGameObjectSuper(void);

public:
	virtual void Create(CDlgSuper* pParent, int x, int y);
	virtual void OnDraw(CDisplayBuffer& destBuffer);
};

