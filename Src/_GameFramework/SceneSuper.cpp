#include "pch.h"
#include "SceneSuper.h"

CSceneSuper::CSceneSuper(void)
{
}

void CSceneSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CSceneSuper::OnUpdate(double dElapsedTime)
{
}

void CSceneSuper::OnDrawWorld(std::vector<std::string>& vecBuffer)
{
}

void CSceneSuper::OnDrawUI(std::vector<std::string>& vecBuffer)
{
	for (CUISuper* pUI : m_listUI)
	{
		pUI->OnDraw(vecBuffer);
	}
}
