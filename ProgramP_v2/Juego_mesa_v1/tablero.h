#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>

class Tablero    //Clase padre la cual va a tener Herencia para otras dos clases hijas
{
private: //Atributos
    std::string UbiFich;
public: //Metodos
    Tablero(); //Constructor
    void SetMostrarTablero(std::string);  //Funcion que muestra el tablero en consola
    char GetColocarFicha(std::string); //Retorna la ubicacion de la ficha verificada a mostrar tablero
    ~Tablero(); //Destructor
};

#endif // TABLERO_H
