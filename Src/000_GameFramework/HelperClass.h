#pragma once

#include "Struct.h"

class CPoint : public ST_POINT
{
public:
	CPoint(void);
	CPoint(int inX, int inY);

	operator ST_POINT() const;
};

class CSize : public ST_SIZE
{
public:
	CSize(void);
	CSize(int inCX, int inCY);

	CSize Inflate(int x, int y);

	operator ST_SIZE() const;
};

class CRect : public ST_RECT
{
public:
	CRect(void);
	CRect(int inLeft, int inTop, int inRight, int inBottom);
	CRect(const ST_POINT& pt, const ST_SIZE& sz);

	operator ST_RECT() const;

	CSize GetSize(void);
	CPoint GetPos(void);
};
