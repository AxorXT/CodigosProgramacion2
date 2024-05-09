//
// Created by Alumnos on 16/04/2024.
//

#include "Prota.h"

Prota::Prota() : Persona(), Poderes(), Poderes2() {
    this -> nombre = "N/A";
    this -> genero = "N/A";
    this -> edad = 0;
    this -> estatura = 0;
    this -> peso = 0;
    this -> fuerza = 0;
    this -> velocidad = 0;
    this -> resistencia = 0;
    this -> PoderEsp = "N/A";
    this -> Fase = "N/A";
    this -> Aumento = 0;
}

Prota::Prota(const Prota &rhs) : Persona(rhs), Poderes(rhs), Poderes2(rhs) {
    this -> ubicacion = rhs.ubicacion;
    this -> CabelloColor = rhs.CabelloColor;
    this -> ki = rhs.ki;
}

Sayajin::Sayajin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string ubicacion, std::string CabelloColor, int ki) : Persona(nombre, genero, edad, estatura, peso){
    this -> ubicacion = ubicacion;
    this -> CabelloColor = CabelloColor;
    this -> ki = ki;
}