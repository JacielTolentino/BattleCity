#pragma once

#include <iostream>
#include <string>

#include <Poder.hpp>
#include <Enemigo.hpp>

class Nivel
{
private:
    int numeronivel, cantidad;
public:
    Nivel(/* args */);
    ~Nivel();

void Cantidad () {
    if (numeronivel<5)
    {
        cantidad=5;
    }
    
    for (int i  = 0; i < cantidad; i++)
    {
       std::cout<<"El nivel tendra "<<cantidad<<" enemigos"<<std::endl;
    }
    
}
};

