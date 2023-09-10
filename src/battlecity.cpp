#include <iostream>

#include <Enemigo.hpp>
#include <Poder.hpp>
#include <Nivel.hpp>
#include <Menu.hpp>
#include <Estructura.hpp>
#include <Bullet.hpp>

int main()
{
 
    std::cout << "Battle Citty" << std::endl;

    Enemigo E1, E2, E3, E4;

    Nivel N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12, N13, N14, N15, N16, N17, N18, N19, N20;

    E1.AsignarClase("Normal");
    E2.AsignarClase("Acorazado");
    E3.AsignarClase("Rapido");
    E4.AsignarClase("Fuerte");

    return 0;
}