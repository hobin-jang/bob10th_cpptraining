#include "pch.h"
#include "GameObjectSuper.h"
#include "SceneSuper.h"

CGameObjectSuper::CGameObjectSuper(void)
{
}

CGameObjectSuper::~CGameObjectSuper(void)
{
}

void CGameObjectSuper::Create(CSceneSuper* pParent)
{
	if (pParent)
		pParent->AddObject(this);
}

void CGameObjectSuper::OnDrawUI(CDisplayBuffer& destBuffer)
{
	if (y < destBuffer.size() && x < destBuffer[y].size())
		destBuffer[y][x] = cPatch;
}

ST_POINT3 CGameObjectSuper::GetPos(void)
{
	ST_POINT3 pos;
	pos.x = x;
	pos.y = y;
	pos.z = z;
	pos.reserved = 0;
	return pos;
}

ST_POINT3 CGameObjectSuper::GetFrontPos(void)
{
	ST_POINT3 pos = GetPos();
	switch (cDir)
	{
	case GAME_OBJECT_DIR_LEFT:	pos.x--;	break;
	case GAME_OBJECT_DIR_RIGHT:	pos.x++;	break;
	case GAME_OBJECT_DIR_UP:	pos.y--;	break;
	case GAME_OBJECT_DIR_DOWN:	pos.y++;	break;
	}
	return pos;
}