#include <iostream>
#include <Mascota.hpp>

int main()
{
    std::cout << "Juego de mascotas." << std::endl;

    Mascota m1, m2, m3;

    m1.EstablecerNombre("Si");
    m2.EstablecerNombre("No");
    m3.EstablecerNombre("TalVez");

    m1.DecirNombres();
    m2.DecirNombres();
    m3.DecirNombres();

    return 0;
}