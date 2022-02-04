#include "pch.h"
#include "SceneSuper.h"

CSceneSuper::CSceneSuper(void)
	: CDlgSuper()
{
}

CSceneSuper::~CSceneSuper(void)
{
}

void CSceneSuper::OnCreate(void)
{
}

void CSceneSuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
    __super::OnUpdate(dwCurrentTick, dwElapsedTick);
    m_Camera.Update(dwElapsedTick * 0.001);
}

int CSceneSuper::DoModal(CDlgSuper* pParent)
{
    return __super::DoModal(nullptr);
}
