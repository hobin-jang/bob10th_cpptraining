#include "pch.h"
#include "HelperClass.h"

CPoint::CPoint(void)
	: ST_POINT{ 0, }
{
}

CPoint::CPoint(int inX, int inY)
	: ST_POINT{ (short)inX, (short)inY }
{
}

CPoint::operator ST_POINT() const
{
	return *(ST_POINT*)this;
}

CSize::CSize(void)
	: ST_SIZE{ 0, }
{
}

CSize::CSize(int inCX, int inCY)
	: ST_SIZE{ (short)inCX, (short)inCY}
{
}

CSize::operator ST_SIZE() const
{
	return *(ST_SIZE*)this;
}

CRect::CRect(void)
	: ST_RECT()
{
}

CRect::CRect(int inLeft, int inTop, int inRight, int inBottom)
	: ST_RECT{ (short)inLeft, (short)inTop, (short)inRight, (short)inBottom }
{
}

CRect::CRect(const ST_POINT& pt, const ST_SIZE& sz)
	: ST_RECT{ (pt.x), (pt.y), (pt.x + sz.cx + 1), (pt.y + sz.cy + 1) }
{}

CRect::operator ST_RECT() const
{
	return *(ST_RECT*)this;
}
