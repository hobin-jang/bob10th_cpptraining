#pragma once

struct ST_VECTOR
{
    double x;
    double y;

    ST_VECTOR(void)
        : x(0), y(0)
    {}

    ST_VECTOR(double inX, double inY)
        : x(inX), y(inY)
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

struct ST_KEYSTATE
{
    int nVirtKey;
    short nID;
    bool bPressed;
    bool bReserved;     // 7바이트를 8바이트로 유격을 채워주는 역할
};
