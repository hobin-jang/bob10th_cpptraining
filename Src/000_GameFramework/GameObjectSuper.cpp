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
