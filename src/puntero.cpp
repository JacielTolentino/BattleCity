#include <Arbusto.hpp>
#include <iostream>
#include <list>
#include <Tank.hpp>
#include <Window.hpp>

using namespace std;

int main()
{
    cout << "Operador nuevo" << new Tank() << endl;
    Tank *t = new Tank();
    cout << "Tanque nuevo" << t << endl;
    Arbusto *a = new Arbusto();
    return 0;
}