#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"
#include "DlgSuper.h"

class CSceneSuper : public CDlgSuper
{
protected:
	CSceneSuper(void);
	virtual ~CSceneSuper(void);

	virtual void OnCreate(void);
	virtual void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);

public:
	virtual int DoModal(CDlgSuper* pParent = nullptr);
};

