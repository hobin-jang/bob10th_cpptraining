#include "pch.h"
#include "Struct.h"

ST_POINT3 ST_GAME_OBJECT::GetFrontPos(void)
{
	ST_POINT3 stCoordID;
	stCoordID.x = x;
	stCoordID.y = y;
	stCoordID.z = z;
	stCoordID.reserved = 0;

	switch (cDir)
	{
	case GAME_OBJECT_DIR_LEFT:	stCoordID.x--;	break;
	case GAME_OBJECT_DIR_RIGHT:	stCoordID.x++;	break;
	case GAME_OBJECT_DIR_UP:	stCoordID.y--;	break;
	case GAME_OBJECT_DIR_DOWN:	stCoordID.y++;	break;
	}
	return stCoordID;
}