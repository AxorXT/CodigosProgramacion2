#include <iostream>
#include "Automovil.h"

int main (){
    Automovil cocheVacio{};

    Automovil ch2("Jeep", "Rubicon", "Rojo", 2009, 12334.65);

    Automovil cocheCopia(ch2);
    Automovil cocheReferencia;

    std::cout << "------ VACIO ------" << std::endl;
    cocheVacio.Impresion1();
    std::cout << "------ DATOS ------" << std::endl;
    ch2.Impresion1();
    std::cout << "------- COPIA ------" << std::endl;
    cocheCopia.Impresion1();



}