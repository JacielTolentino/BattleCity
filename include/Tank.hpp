#pragma once
#include <Vector.hpp>
#include <Draw.hpp>
#include <Changer.hpp>

class Tank : public Draw, public Changer
{
private:
    Vector posicion;

public:
    Tank() : Draw("Tanque")
    {
        this->posicion = Vector();
    }

    Tank(int x) : Draw("Tanque")
    {
        this->posicion.MoveX(x);
    }

    void Actualizar()
    {
        this->posicion.MoveX(1);
        this->posicion.ChangeDirectionX();
    }

    ~Tank()
    {
    }
};
