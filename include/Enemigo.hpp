#pragma once
#include <string>
#include <iostream>

#include <Poder.hpp>

class Enemigo
{
private:
    int life;
    std::string forma;
    std::string clase;
    std::string valor;

public:
    Enemigo(/* args */)
    {
        this->life = 1;
        this->clase = clase;
    }

    void Disparar(std::string name)
    {
        this->valor = valor;
    }

    void AsignarClase()
    {
        this->forma = forma;
    }
    ~Enemigo() {}
};
