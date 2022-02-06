#include "pch.h"
#include "DlgSuper.h"

CDlgSuper::CDlgSuper(void)
    : m_bIsClosed(false)
    , m_nExitCode(0)
{
}

CDlgSuper::~CDlgSuper(void)
{
    m_listUI.clear();
}

void CDlgSuper::Close(int nExitCode)
{
    m_bIsClosed = true;
    m_nExitCode = nExitCode;
}

void CDlgSuper::OnCreate(void)
{
    __super::OnCreate();
}

void CDlgSuper::OnClose(void)
{
}

void CDlgSuper::AddUI(CUISuper* pChild)
{
    m_listUI.push_back(pChild);
}

void CDlgSuper::AddObject(CGameObjectSuper* pChild)
{
    m_listObject.push_back(pChild);
}

int CDlgSuper::DoModal(CDlgSuper* pParent)
{
    OnCreate();

    static DWORD dwLastUpdateTick = GetTickCount();
    while (!m_bIsClosed)
    {
        const DWORD dwElapsedTick = 1000 / g_dwFPS;
        const DWORD dwCurrentTick = dwLastUpdateTick + dwElapsedTick;

        std::list<ST_KEYSTATE> listKeyState;
        g_Input.Query(listKeyState);
        OnInput(listKeyState);

        if (pParent)
            pParent->OnUpdate(dwCurrentTick, dwElapsedTick);
        OnUpdate(dwCurrentTick, dwElapsedTick);

        CDisplayBuffer& vecBackBuffer = g_Output.GetBackBuffer();
        if (pParent)
            pParent->OnDrawWorld(vecBackBuffer);
        OnDrawWorld(vecBackBuffer);

        CDisplayBuffer vecDisplayBuffer;
        g_Output.Flip(g_Camera.GetViewPos(), vecDisplayBuffer);
        if (pParent)
            pParent->OnDrawUI(vecDisplayBuffer);
        OnDrawUI(vecDisplayBuffer);

        g_Output.Render(vecDisplayBuffer);

        // 30 FPS∑Œ ∞Ì¡§
        Sleep(dwElapsedTick);
        dwLastUpdateTick = dwCurrentTick;
    }

    OnClose();
    return m_nExitCode;
}

void CDlgSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CDlgSuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
    for (CUISuper* pUI : m_listUI)
    {
        if (!pUI->IsVisible())
            continue;
        pUI->OnUpdate(dwCurrentTick, dwElapsedTick);
    }
}

void CDlgSuper::OnDrawWorld(CDisplayBuffer& vecBuffer)
{
    for (CGameObjectSuper* pObject : m_listObject)
        pObject->OnDraw(vecBuffer);
}

void CDlgSuper::OnDrawUI(CDisplayBuffer& vecBuffer)
{
    for (CUISuper* pUI : m_listUI)
    {
        if (!pUI->IsVisible())
            continue;
        pUI->OnDraw(vecBuffer);
    }
}

void CDlgSuper::OnDraw(CDisplayBuffer& vecBuffer)
{
    __super::OnDraw(vecBuffer);
    OnDrawUI(vecBuffer);
}