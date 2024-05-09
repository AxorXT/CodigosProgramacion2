//
// Created by Alumnos on 12/03/2024.
//

#ifndef AAST_AUTOMOVIL_H
#define AAST_AUTOMOVIL_H

#include <iostream>

class Automovil {
public:

    Automovil() = default;//Default constructor
    Automovil(const Automovil &rhs);// Copy constructor
    Automovil(Automovil &&rhs) noexcept;//Reference constructor
    Automovil(std::string marca, std::string modelo, std::string color, int anio, float KM);//Constructor parametros
    ~Automovil() = default;//Destructor

    Automovil &operator= (Automovil &rhs);

    void Impresion1(){
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Anio: " << anio << std::endl;
        std::cout << "Kilometraje: " << KM << std::endl;
    };

private:
    std::string marca;
    std::string modelo;
    std::string color;
    int anio;
    float KM;
};



#endif //AAST_AUTOMOVIL_H
