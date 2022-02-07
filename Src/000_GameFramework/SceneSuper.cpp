#include "pch.h"
#include "SceneSuper.h"

CSceneSuper::CSceneSuper(void)
	: CDlgSuper(nullptr)
{
}

CSceneSuper::~CSceneSuper(void)
{
}

void CSceneSuper::AddObject(CGameObjectSuper* pChild)
{
    m_listObject.push_back(pChild);
}

void CSceneSuper::OnCreate(void)
{
}

void CSceneSuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
    __super::OnUpdate(dwCurrentTick, dwElapsedTick);
    g_Camera.Update(dwElapsedTick * 0.01);
}

void CSceneSuper::OnDrawWorld(CDisplayBuffer& vecBuffer)
{
    for (CGameObjectSuper* pObject : m_listObject)
        pObject->OnDrawUI(vecBuffer);
}
