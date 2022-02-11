#pragma once

#include "Struct.h"

class CCamera
{
	ST_VECTOR m_TargetPos;
	ST_VECTOR m_Pos;
	ST_POINT m_ptCenterOffset;

public:
	CCamera(void);
	~CCamera(void);

	void CenterOffset(ST_POINT ptCenterOffset);
	void SetViewPos(int x, int y, bool bForcely = false);
	void SetViewPos(ST_POINT3 pos, bool bForcely = false);
	void SetViewPos(const ST_VECTOR& pos, bool bForcely = false);
	void Update(double dElapsedTime);
	ST_VECTOR GetViewPos(void);
};
