//
// Created by Alumnos on 16/04/2024.
//

#ifndef AAST_PROTA_H
#define AAST_PROTA_H
#include <iostream>
#include "Persona.h"
#include "Poderes.h"
#include "Poderes2.h"

class Prota : public Persona, public Poderes, public Poderes2 {

    Prota(); //Constructor default
    Prota(const Prota &rhs); //Constructor de copia
    Prota(std::string nombre, std::string genero, int edad, float estatura, float peso, int Fuerza, int Velocidad, int Resistencia, std::string PoderEsp, std::string Fase, int Aumento); //Constructor Parametros
    ~Prota() = default;


};


#endif //AAST_PROTA_H
