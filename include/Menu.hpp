#pragma once

#include <string>
#include <iostream>

#include <Nivel.hpp>

class Menu
{
private:
    std::string Nivel;
    int numeronivel;

public:
    Menu(/* args */);
    {
    }
    ~Menu()
    {
    }

    void SeleccionarNivel()
    {
        std::cout << "Seleccion de nivel" << std::endl;
        std::cin >> numeronivel >> std::endl;
    }
};
