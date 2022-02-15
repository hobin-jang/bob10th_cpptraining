#include "pch.h"
#include "Struct.h"

bool ST_POINT::operator==(const ST_POINT& other)
{
    return x == other.x && y == other.y;
}

bool ST_POINT::operator!=(const ST_POINT& other)
{
    return x != other.x && y != other.y;
}

bool ST_SIZE::operator==(const ST_SIZE& other)
{
    return cx == other.cx && cy == other.cy;
}

bool ST_SIZE::operator!=(const ST_SIZE& other)
{
    return cx != other.cx && cy != other.cy;
}

bool ST_RECT::operator==(const ST_RECT& other)
{
    return l == other.l && t == other.t && r == other.r && b == other.b;
}

ST_POINT ST_VECTOR::MakePoint(void)
{
    return ST_POINT{ (short)x, (short)y };
}

ST_SIZE ST_VECTOR::MakeSize(void)
{
    return ST_SIZE{ (short)x, (short)y };
}

ST_VECTOR ST_VECTOR::operator+(const ST_VECTOR& other)
{
    ST_VECTOR temp;
    temp.x = this->x + other.x;
    temp.y = this->y + other.y;
    return temp;
}
ST_VECTOR ST_VECTOR::operator-(const ST_VECTOR& other)
{
    ST_VECTOR temp;
    temp.x = this->x - other.x;
    temp.y = this->y - other.y;
    return temp;
}
ST_VECTOR ST_VECTOR::operator*(double scalar)
{
    ST_VECTOR temp;
    temp.x = this->x * scalar;
    temp.y = this->y * scalar;
    return temp;
}
ST_VECTOR ST_VECTOR::operator/(double scalar)
{
    ST_VECTOR temp;
    temp.x = this->x / scalar;
    temp.y = this->y / scalar;
    return temp;
}

ST_VECTOR& ST_VECTOR::operator+=(const ST_VECTOR& other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}
ST_VECTOR& ST_VECTOR::operator-=(const ST_VECTOR& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

bool ST_VECTOR::operator==(const ST_VECTOR& other)
{
    return x == other.x && y == other.y;
}

bool ST_VECTOR::operator!=(const ST_VECTOR& other)
{
    return x != other.x && y != other.y;
}

