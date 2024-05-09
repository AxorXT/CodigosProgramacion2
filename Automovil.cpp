//
// Created by Alumnos on 12/03/2024.
//

#include "Automovil.h"

// Constructor de Parametros
Automovil::Automovil(std::string marca, std::string modelo, std::string color, int anio, float KM){
    this -> marca = marca;
    this -> modelo = modelo;
    this -> color = color;
    this -> anio = anio;
    this -> KM = KM;
}

// Constructor de Copia
Automovil::Automovil(const Automovil &rhs){
    marca = rhs.marca;
    modelo = rhs.modelo;
    color = rhs.color;
    anio = rhs.anio;
    KM = rhs.KM;
}

// Constructor de Referencia
Automovil::Automovil(Automovil &&rhs) noexcept {
    marca = rhs.marca;
    modelo = rhs.modelo;
    color = rhs.color;
    anio = rhs.anio;
    KM = rhs.KM;
}

Automovil &Automovil::operator= (const Automovil &rhs){
    this -> marca = rhs.marca;
    this -> modelo = rhs.modelo;
    this -> color = rhs.color;
    this -> anio = rhs.anio;
    this -> KM = rhs.KM;

}