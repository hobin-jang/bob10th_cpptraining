#include "pch.h"
#include "DlgSuper.h"

DWORD CDlgSuper::FPS = 30;
CKeyInput CDlgSuper::m_Input;
CConsoleOutput CDlgSuper::m_Output;
CCamera CDlgSuper::m_Camera;

CDlgSuper::CDlgSuper(void)
    : m_bIsEndded(false)
    , m_nExitCode(0)
{
}

CDlgSuper::~CDlgSuper(void)
{
    m_listUI.clear();
}

void CDlgSuper::Close(int nExitCode)
{
    m_bIsEndded = true;
    m_nExitCode = nExitCode;
}

void CDlgSuper::AddUI(CUISuper* pNewUI)
{
    m_listUI.push_back(pNewUI);
}

void CDlgSuper::AddObject(CGameObjectSuper* pObject)
{
    m_listObject.push_back(pObject);
}

int CDlgSuper::DoModal(CDlgSuper* pParent)
{
    OnCreate();

    static DWORD dwLastUpdateTick = GetTickCount();
    while (!m_bIsEndded)
    {
        const DWORD dwCurrentTick = GetTickCount();
        const DWORD dwElapsedTick = dwCurrentTick - dwLastUpdateTick;

        std::list<ST_KEYSTATE> listKeyState;
        m_Input.Query(listKeyState);
        OnInput(listKeyState);

        if (pParent)
            pParent->OnUpdate(dwCurrentTick, dwElapsedTick);
        OnUpdate(dwCurrentTick, dwElapsedTick);

        CDisplayBuffer& vecBackBuffer = m_Output.GetBackBuffer();
        if (pParent)
            pParent->OnDrawWorld(vecBackBuffer);
        OnDrawWorld(vecBackBuffer);

        CDisplayBuffer vecDisplayBuffer;
        m_Output.Flip(m_Camera.GetViewPos(), vecDisplayBuffer);
        if (pParent)
            pParent->OnDrawUI(vecDisplayBuffer);
        OnDrawUI(vecDisplayBuffer);

        m_Output.Render(vecDisplayBuffer);

        // 30 FPS∑Œ ∞Ì¡§
        if (dwElapsedTick < 30)
            Sleep(30 - dwElapsedTick);
        dwLastUpdateTick = dwCurrentTick;
    }

    return m_nExitCode;
}

void CDlgSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CDlgSuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
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
        if (!pUI->GetVisible())
            continue;
        pUI->OnDraw(vecBuffer);
    }
}

void CDlgSuper::OnDraw(CDisplayBuffer& vecBuffer)
{
    __super::OnDraw(vecBuffer);
    OnDrawUI(vecBuffer);
}