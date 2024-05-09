//
// Created by Alumnos on 16/04/2024.
//

#ifndef AAST_PODERES_H
#define AAST_PODERES_H
#include <iostream>

class Poderes {
public:

    Poderes(); //Constructor default
    Poderes(const Poderes &rhs); //Constructor de copia
    Poderes(int Fuerza, int Velocidad, int Resistencia); //Constructor Parametros
    ~Poderes() = default;


    int getFuerza() const;
    void setFuerza(int fuerza);

    float getVelocidad() const;
    void setVelocidad(int velocidad);

    float getResistencia () const;
    void setResistencia(float resistencia);

private:
    int fuerza;
    int velocidad;
    int resistencia;

};


#endif //AAST_PODERES_H
