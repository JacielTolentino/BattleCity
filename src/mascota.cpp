#include <iostream>
#include <Mascota.hpp>

int main()
{
    std::cout << "Juego de mascotas." << std::endl;

    Mascota m1, m2, m3;

    m1.EstablecerNombre("Arriba");
    m2.EstablecerNombre("LasViejas");
    m3.EstablecerNombre("Borrachas");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();

    return 0;
}