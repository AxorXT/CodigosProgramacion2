//
// Created by Alumnos on 09/04/2024.
//
#include "Sayajin.h"

Sayajin::Sayajin() : Persona(){
    this -> ubicacion = "N/A";
    this -> CabelloColor = "N/A";
    this -> ki = 0;
}

Sayajin::Sayajin(const Sayajin &rhs) : Persona(rhs) {
    this -> ubicacion = rhs.ubicacion;
    this -> CabelloColor = rhs.CabelloColor;
    this -> ki = rhs.ki;
}

Sayajin::Sayajin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string ubicacion, std::string CabelloColor, int ki) : Persona(nombre, genero, edad, estatura, peso){
    this -> ubicacion = ubicacion;
    this -> CabelloColor = CabelloColor;
    this -> ki = ki;
}

std::string Sayajin::getUbicacion() const {
    return ubicacion;
}

void Sayajin::setUbicacion(std::string NewUbicacion) {
    this -> ubicacion = NewUbicacion;
}

std::string Sayajin::getCabelloColor() const{
    return CabelloColor;
}

void Sayajin::setCabelloColor(std::string NewCabelloColor) {
    this -> CabelloColor = NewCabelloColor;
}

int Sayajin::getKi() const{
    return ki;
}

void Sayajin::setKi(int NewKi) {
    this -> ki = NewKi;
}