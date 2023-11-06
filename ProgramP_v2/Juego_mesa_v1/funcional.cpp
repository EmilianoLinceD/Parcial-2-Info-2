#include <iostream>
#include "tablero.h"


void Funcional()
{
    // Parte donde se llama para el registro del jugador.
    std::string NombreJug1, NombreJug2, Ficha1, Ficha2;
    std::cout << "______Bienvenido a la partida de OTHELLO________" << std::endl;
    for (int NespMen = 0; NespMen < 1; ++NespMen) {
        std::cout << std::endl;
    }
    std::cout << "------------Registro jugadores----------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Nombre del jugasor 1 [Juega con las blancas]: ";
    std::cin >> NombreJug1;
    std::cout << std::endl;
    std::cout << "Nombre del jugador 2 [Juega con las negras]: ";
    std::cin >> NombreJug2;
    std::cout << std::endl;
    for (int NespMen = 0; NespMen < 2; ++NespMen) {
        std::cout << std::endl;
    }
    std::cout << "Partida de " << NombreJug1 << "vs" << NombreJug2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "   1 2 3 4 5 6 7 8  " << std::endl;
    std::cout << "   _ _ _ _ _ _ _ _  " << std::endl;
    std::cout << "a | | | | | | | | | " << std::endl;
    std::cout << "b | | | | | | | | | " << std::endl;
    std::cout << "c | | | | | | | | | " << std::endl;
    std::cout << "d | | | |o|*| | | | " << std::endl;
    std::cout << "e | | | |*|o| | | | " << std::endl;
    std::cout << "f | | | | | | | | | " << std::endl;
    std::cout << "g | | | | | | | | | " << std::endl;
    std::cout << "h | | | | | | | | | " << std::endl;
    std::cout << "   - - - - - - - - " << std::endl;
    for (int NespMen = 0; NespMen < 1; ++NespMen) {
        std::cout << std::endl;
    }
    Tablero Lance;
    for (int RepColFicha = 0; RepColFicha < 100; ++RepColFicha){
    std::cout << "Turno Jugador 1 con Blancas [Colocar posicion de la ficha]: ";
    std::cin >> Ficha1;
    Lance.SetMostrarTablero(Ficha1);
    std::cout << "Turno Jugador 1 con Negras [Colocar posicion de la ficha]: ";
    std::cin >> Ficha2;
    Lance.SetMostrarTablero(Ficha2);
    }
}
