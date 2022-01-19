#pragma once

#include <list>
#include <vector>
#include <string>
#include "Struct.h"

class CSceneSuper
{
protected:
	CSceneSuper(void);

public:
	void Input(std::list<ST_KEYSTATE>& listKeyState);
	void Update(double dElapsedTime);
	void Draw(std::vector<std::string>& vecBuffer);
};

