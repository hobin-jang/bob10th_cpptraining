#include "pch.h"
#include "DlgSuper.h"

CKeyInput CDlgSuper::m_Input;

CDlgSuper::CDlgSuper(CDlgSuper* pParent)
    : m_pParent(pParent)
    , m_bIsEndded(false)
    , m_nExitCode(0)
{
}

CDlgSuper::~CDlgSuper(void)
{
    m_listUI.clear();
}

void CDlgSuper::OnCreate(void)
{
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

int CDlgSuper::DoModal(void)
{
    OnCreate();

    static DWORD dwLastUpdateTick = GetTickCount();
    while (!m_bIsEndded)
    {
        std::list<ST_KEYSTATE> listKeyState;
        m_Input.Query(listKeyState);
        OnInput(listKeyState);

        OnUpdate(g_dDeltaTime);
        m_Camera.Update(g_dDeltaTime);

        CDisplayBuffer& vecBackBuffer = m_Output.GetBackBuffer();
        OnDrawWorld(vecBackBuffer);

        CDisplayBuffer vecDisplayBuffer;
        m_Output.Flip(m_Camera.GetViewPos(), vecDisplayBuffer);
        OnDrawUI(vecDisplayBuffer);

        m_Output.Render(vecDisplayBuffer);

        const DWORD dwCurrentTick = GetTickCount();
        if (dwCurrentTick < dwLastUpdateTick)
            Sleep(dwLastUpdateTick - dwCurrentTick);
        dwLastUpdateTick += g_nDeltaTick;
    }

    return m_nExitCode;
}

void CDlgSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CDlgSuper::OnUpdate(double dElapsedTime)
{
}

void CDlgSuper::OnDrawWorld(std::vector<std::string>& vecBuffer)
{
    for (CGameObjectSuper* pObject : m_listObject)
        pObject->OnDraw(vecBuffer);
}

void CDlgSuper::OnDrawUI(std::vector<std::string>& vecBuffer)
{
    for (CUISuper* pUI : m_listUI)
        pUI->OnDraw(vecBuffer);
}
