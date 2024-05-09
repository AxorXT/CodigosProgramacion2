//
// Created by Alumnos on 30/04/2024.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <string>

class Animal {
public:

    Animal(); //Constructor default
    Animal(const Animal &rhs); //Constructor copia
    Animal(std::string nombre, int edad, float peso, float altura);
    virtual ~Animal() = default;

std::string nombre;
int edad;
float peso;
float altura;

};


#endif //ANIMAL_ANIMAL_H
