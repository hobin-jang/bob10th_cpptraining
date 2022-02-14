#include "pch.h"
#include "Struct.h"

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