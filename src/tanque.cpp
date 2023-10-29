#include <Arbusto.hpp>
#include <iostream>
#include <list>
#include <Tank.hpp>
#include <Window.hpp>

using namespace std;
int main()
{
    Tank *tank1 = new Tank(0);
    // Tank*  tank2 = new Tank (30);
    Arbusto *arb1 = new Arbusto(5);
    Window *wind = new Window();
    list<Draw *> draws;
    draws.push_back(tank1);
    // draws.push_back(tank2);
    draws.push_back(arb1);
    list<Changer *> changes;
    changes.push_back(tank1);
    while (!wind->ActClose())
    {
        wind->Draw(draws);
        wind->Actualizar(changes);
    }
    return 0;
}