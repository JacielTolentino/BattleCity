#pragma once
#include <Draw.hpp>
#include <Vector.hpp>

class Arbusto : public Draw
{
private:
    Vector position;

public:
    Arbusto() : Draw("Arbusto")
    {
        this->position = Vector();
    }

    Arbusto(int x) : Draw("Arbusto")
    {
        this->position.ReadY();
    }

    ~Arbusto()
    {
    }
};
