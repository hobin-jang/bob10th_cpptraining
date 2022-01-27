#include "pch.h"
#include "Camera.h"

CCamera::CCamera(void)
{
}

CCamera::~CCamera(void)
{
}

void CCamera::SetViewPos(int x, int y, bool bForcely)
{
    m_TargetPos.x = x;
    m_TargetPos.y = y;
    if (bForcely)
        m_Pos = m_TargetPos;
}

void CCamera::SetViewPos(const ST_VECTOR& pos, bool bForcely)
{
    m_TargetPos = pos;
    if (bForcely)
        m_Pos = m_TargetPos;
}

void CCamera::Update(double dElapsedTime)
{
    m_Pos += (m_TargetPos - m_Pos) * dElapsedTime * 0.5;
}

ST_VECTOR CCamera::GetViewPos(void)
{
    return m_Pos;
}
