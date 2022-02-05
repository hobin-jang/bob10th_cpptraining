#include "pch.h"
#include "GameObjectSuper.h"
#include "DlgSuper.h"

CGameObjectSuper::CGameObjectSuper(void)
{
}

CGameObjectSuper::~CGameObjectSuper(void)
{
}

void CGameObjectSuper::Create(CDlgSuper* pParent, int inX, int inY, int inZ)
{
	x = inX;
	y = inY;
	z = inZ;
	if (pParent)
		pParent->AddObject(this);
}

void CGameObjectSuper::OnDraw(CDisplayBuffer& destBuffer)
{
	if (y < destBuffer.size() && x < destBuffer[y].size())
		destBuffer[y][x] = cPatch;
}

ST_POINT3 CGameObjectSuper::GetFrontPos(void)
{
	ST_POINT3 stCoordID;
	stCoordID.x = x;
	stCoordID.y = y;
	stCoordID.z = z;
	stCoordID.reserved = 0;

	switch (cDir)
	{
	case GAME_OBJECT_DIR_LEFT:	stCoordID.x--;	break;
	case GAME_OBJECT_DIR_RIGHT:	stCoordID.x++;	break;
	case GAME_OBJECT_DIR_UP:	stCoordID.y--;	break;
	case GAME_OBJECT_DIR_DOWN:	stCoordID.y++;	break;
	}
	return stCoordID;
}