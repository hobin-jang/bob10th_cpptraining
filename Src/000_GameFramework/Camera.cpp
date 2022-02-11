#include "pch.h"
#include "Camera.h"

CCamera::CCamera(void)
{
}

CCamera::~CCamera(void)
{
}

void CCamera::CenterOffset(ST_POINT ptCenterOffset)
{
    m_ptCenterOffset = ptCenterOffset;
}

void CCamera::SetViewPos(int x, int y, bool bForcely)
{
    m_TargetPos.x = x - m_ptCenterOffset.x;
    m_TargetPos.y = y - m_ptCenterOffset.y;
    if (bForcely)
        m_Pos = m_TargetPos;
}

void CCamera::SetViewPos(const ST_VECTOR& pos, bool bForcely)
{
    m_TargetPos = pos;
    m_TargetPos.x -= m_ptCenterOffset.x;
    m_TargetPos.y -= m_ptCenterOffset.y;
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
