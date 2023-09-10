#pragma once

#include <string>
#include <iostream>

class Mascota
{
private:
    int life;
    std::string name;

public:
    Mascota(/* args */)
    {
        this->life = 100;
    }

    void EstablecerNombre(std::string name)
    {
        this->name = name;
    }

    ~Mascota() {}

    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->name << std::endl;
    }
};
