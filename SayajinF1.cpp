//
// Created by Alumnos on 11/04/2024.
//

#include "SayajinF1.h"

SayajinF1::SayajinF1() : Sayajin(){
    this -> especialidad = "N/A";
    this -> desgaste = "N/A";
    this -> velocidad = 0;
}

SayajinF1::SayajinF1(const SayajinF1 &rhs) : Sayajin(rhs) {
    this -> especialidad = rhs.especialidad;
    this -> desgaste = rhs.desgaste;
    this -> velocidad = rhs.velocidad;
}

SayajinF1::SayajinF1(std::string ubicacion, std::string CabelloColor, int ki, std::string especialidad, std::string desgaste, int velocidad) : Sayajin(ubicacion, CabelloColor, ki){
    this -> especialidad = especialidad;
    this -> desgaste = desgaste;
    this -> velocidad = velocidad;
}