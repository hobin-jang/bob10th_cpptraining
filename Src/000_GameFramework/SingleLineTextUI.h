#pragma once

#include "UISuper.h"

class CSingleLineTextUI : public CUISuper
{
public:
	CSingleLineTextUI(void);

private:
	void OnDraw(CDisplayBuffer& vecBuffer);
};

