#include "tablero.h"
#include <iostream>
#include <string>




Tablero::Tablero() {} //Constructor Siempre es bueno hacerlo ya que se usa para el funcionamiento adecuado de los metodos

Tablero::~Tablero() {} //Destructor para eliminar el objeto al llamarlo

char Tablero::GetColocarFicha(std::string UbiFich) // Verificar y comprobar si
{
    int Turno;
    int total = 64;
    bool Comprobante1 = true;
    std::string EspUbicacion[total];
    for (int i = 0; i < total; ++i) {
        if (UbiFich==EspUbicacion[i]) {
            Comprobante1 = false;
             std::cout << "ERROR. Poscicion ya ocupada por una ficha.";
        }
        else{Comprobante1=true;}
    }
    if (Comprobante1)
    {
        EspUbicacion[total]=UbiFich;
        if ((Turno%2)==0)
        {
            Turno++;
            return 'o';
        }
        else
        {
            Turno++;
            return '*';
        }
    }
    return ' ';
}


void Tablero::SetMostrarTablero(std::string _UbiFich)
{
    UbiFich = _UbiFich;
    char CaracterFicha = GetColocarFicha(UbiFich);
    char PosMap[64];
    std::string posiciones[64];
    int index = 0;

    for (int Recorrer = 0; Recorrer < 64; ++Recorrer) {
        if (PosMap[Recorrer]=='*')
        {
        PosMap[Recorrer]=' ';
        }
    }
    for (char columna = 'a'; columna <= 'h'; columna++) {
        for (char fila = '1'; fila <= '8'; fila++) {
            std::string posicion;
            posicion += columna;
            posicion += fila;
            posiciones[index++] = posicion;
        }
    }

    int posicionEnArreglo = -1;
    for (int i = 0; i < 64; i++) {
        if (posiciones[i] == UbiFich) {
            posicionEnArreglo = i;
        }
    }
    PosMap[posicionEnArreglo]=CaracterFicha;
    std::cout << "   1 2 3 4 5 6 7 8  " << std::endl;
    std::cout << "   _ _ _ _ _ _ _ _  " << std::endl;
    std::cout << "a |"<<PosMap[0]<<"|"<<PosMap[1]<<"|"<<PosMap[2]<<"|"<<PosMap[3]<<"|"<<PosMap[4]<<"|"<<PosMap[5]<<"|"<<PosMap[6]<<"|"<<PosMap[7]<<"| " << std::endl;
    std::cout << "b |"<<PosMap[8]<<"|"<<PosMap[9]<<"|"<<PosMap[10]<<"|"<<PosMap[11]<<"|"<<PosMap[12]<<"|"<<PosMap[13]<<"|"<<PosMap[14]<<"|"<<PosMap[15]<<"| " << std::endl;
    std::cout << "c |"<<PosMap[16]<<"|"<<PosMap[17]<<"|"<<PosMap[18]<<"|"<<PosMap[19]<<"|"<<PosMap[20]<<"|"<<PosMap[21]<<"|"<<PosMap[22]<<"|"<<PosMap[23]<<"| " << std::endl;
    std::cout << "d |"<<PosMap[24]<<"|"<<PosMap[25]<<"|"<<PosMap[26]<<"|o|*|"<<PosMap[29]<<"|"<<PosMap[30]<<"|"<<PosMap[31]<<"| " << std::endl;
    std::cout << "e |"<<PosMap[32]<<"|"<<PosMap[33]<<"|"<<PosMap[34]<<"|*|o|"<<PosMap[37]<<"|"<<PosMap[38]<<"|"<<PosMap[39]<<"| " << std::endl;
    std::cout << "f |"<<PosMap[40]<<"|"<<PosMap[41]<<"|"<<PosMap[42]<<"|"<<PosMap[43]<<"|"<<PosMap[44]<<"|"<<PosMap[45]<<"|"<<PosMap[46]<<"|"<<PosMap[47]<<"| " << std::endl;
    std::cout << "g |"<<PosMap[48]<<"|"<<PosMap[49]<<"|"<<PosMap[50]<<"|"<<PosMap[51]<<"|"<<PosMap[52]<<"|"<<PosMap[53]<<"|"<<PosMap[54]<<"|"<<PosMap[55]<<"| " << std::endl;
    std::cout << "h |"<<PosMap[56]<<"|"<<PosMap[57]<<"|"<<PosMap[58]<<"|"<<PosMap[59]<<"|"<<PosMap[60]<<"|"<<PosMap[61]<<"|"<<PosMap[62]<<"|"<<PosMap[63]<<"| " << std::endl;
    std::cout << "   - - - - - - - - " << std::endl;


}

