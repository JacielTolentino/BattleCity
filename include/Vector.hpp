#pragma once

class Vector
{
private:
    int x, y;
    int dir_x, dir_y;

public:
    Vector()
    {
        this->x = 0;
        this->dir_x = 1;
        this->y = 0;
        this->dir_y = 1;
    }

    Vector(int x, int y)
    {
        this->x = x;
        this->dir_x = 1;
        this->y = y;
        this->dir_y = 1;
    }

    void ChangeDirectionX()
    {
        this->dir_x *= -1;
    }

    void ChangeDirectionY()
    {
        this->dir_y *= -1;
    }

    void MoveX(unsigned int x)
    {
        this->x += x * this->dir_x;
    }

    int ReadX()
    {
        return this->x;
    }

    int ReadY()
    {
        return this->y;
    }

    ~Vector()
    {
    }
};
