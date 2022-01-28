#pragma once

#include <map>
#include <string>
#include <vector>
#include <Windows.h>

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

struct ST_POINT
{
    short x;
    short y;
};

struct ST_SIZE
{
    short cx;
    short cy;
};

struct ST_RECT
{
    short l;
    short t;
    short r;
    short b;
};

struct ST_POINT3
{
    union
    {
        unsigned long long int qwPos;
        struct {
            short x;
            short y;
            short z;
            short reserved;
        };
    };

    ST_POINT3(void)
        : qwPos(0)
    {}
};

struct ST_KEYSTATE
{
    int nVirtKey;
    short nID;
    bool bPressed;
    bool bReserved;     // 7바이트를 8바이트로 유격을 채워주는 역할
};

enum E_GAME_OBJECT_DIR
{
    GAME_OBJECT_DIR_LEFT = 1,
    GAME_OBJECT_DIR_RIGHT,
    GAME_OBJECT_DIR_UP,
    GAME_OBJECT_DIR_DOWN,
};

struct ST_GAME_OBJECT
{
    short x;
    short y;
    short z;    // floor
    char cDir;  // GAMEKEY_LEFT or RIGHT, UP, DOWN
    char cPatch;

    ST_POINT3 GetFrontPos(void);
};
