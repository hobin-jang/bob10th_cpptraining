#pragma once

#include "Struct.h"

class CCamera
{
	ST_VECTOR m_TargetPos;
	ST_VECTOR m_Pos;

	CCamera(void);
	~CCamera(void);

public:
	void SetViewPos(int x, int y, bool bForcely = false);
	void SetViewPos(const ST_VECTOR& pos, bool bForcely = false);
	void Update(double dElapsedTime);
	ST_VECTOR GetViewPos(void);

	static CCamera* GetInstance(void)
	{
		static CCamera instance;
		return &instance;
	}
};

inline CCamera* Camera(void)
{
	return CCamera::GetInstance();
}
