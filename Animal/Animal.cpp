//
// Created by Alumnos on 30/04/2024.
//

#include "Animal.h"

Animal::Animal() {
    this -> nombre = "N/A";
    this -> edad = 0;
    this -> peso = 0;
    this -> altura = 0;
}

Animal::Animal(std::string nombre, int edad, float peso, float altura) {
    this -> nombre = nombre;
    this -> edad = edad;
    this -> peso = peso;
    this -> altura = altura;
}

Animal::Animal(const Animal &rhs) {
    nombre = rhs.nombre;
    edad = rhs.edad;
    peso = rhs.peso;
    altura = rhs.altura;
}