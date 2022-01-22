#pragma once

enum E_GAMEKEY
{
    GAMEKEY_LEFT,
    GAMEKEY_RIGHT,
    GAMEKEY_UP,
    GAMEKEY_DOWN,
};

struct ST_VECTOR
{
    double x;
    double y;

    ST_VECTOR(void)
        : x(0), y(0)
    {}

    ST_VECTOR operator+(const ST_VECTOR& other)
    {
        ST_VECTOR temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    ST_VECTOR operator-(const ST_VECTOR& other)
    {
        ST_VECTOR temp;
        temp.x = this->x - other.x;
        temp.y = this->y - other.y;
        return temp;
    }
    ST_VECTOR operator*(double scalar)
    {
        ST_VECTOR temp;
        temp.x = this->x * scalar;
        temp.y = this->y * scalar;
        return temp;
    }
    ST_VECTOR operator/(double scalar)
    {
        ST_VECTOR temp;
        temp.x = this->x / scalar;
        temp.y = this->y / scalar;
        return temp;
    }

    ST_VECTOR& operator+=(const ST_VECTOR& other)
    {
        this->x += other.x;
        this->y += other.y;
        return *this;
    }
    ST_VECTOR& operator-=(const ST_VECTOR& other)
    {
        this->x -= other.x;
        this->y -= other.y;
        return *this;
    }
};
