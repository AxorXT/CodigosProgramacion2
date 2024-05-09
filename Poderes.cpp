//
// Created by Alumnos on 16/04/2024.
//

#include "Poderes.h"
#include <iostream>

Poderes::Poderes() {
    this -> fuerza = 0;
    this -> velocidad = 0;
    this -> resistencia = 0;
}

Poderes::Poderes(int fuerza, int velocidad, int resistencia) {
    this -> fuerza = fuerza;
    this -> velocidad = velocidad;
    this -> resistencia = resistencia;
}

Poderes::Poderes(const Poderes &rhs) {
    fuerza = rhs.fuerza;
    velocidad = rhs.velocidad;
    resistencia = rhs.resistencia;
}
