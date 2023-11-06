#include <iostream>
#include "funcional.cpp"

void Funcional();

void Menu()
{
    int OpcionMenu;


    std::cout << "------------OTHELLO-------------" << std::endl;
    for (int NespMen = 0; NespMen < 2; ++NespMen) {
        std::cout << std::endl;
    }
    std::cout << "__Menu de opcipnes__" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Nueva Partida." << std::endl;
    std::cout << std::endl;


    std::cout << "Elije una opcion:";
    std::cin >> OpcionMenu;

    switch (OpcionMenu) {
    case 1:
        Funcional();
        break;
    default:
        std::cout << "ERROR. Opcion no valida. Vuelve a intentarlo." << std::endl;
        std::cout << std::endl;
        Menu();
        break;
    }

}
