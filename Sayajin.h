//
// Created by Alumnos on 09/04/2024.
//

#ifndef AAST_SAYAJIN_H
#define AAST_SAYAJIN_H

#include "Persona.h"

class Sayajin: public Persona{
public:

    Sayajin();
    Sayajin(std::string nombre, std::string genero, int edad, float estatura, float peso);
    Sayajin(const Sayajin &rhs);
    Sayajin(std::string nombre, std::string genero, int edad, float estatura, float peso, std::string ubicacion, std::string CabelloColor, int ki);
    ~Sayajin() = default;

    std::string getUbicacion() const;
    void setUbicacion(std::string NewAldea);

    std::string getCabelloColor() const;
    void setCabelloColor(std::string NewCabelloColor);

    int getKi() const;
    void setKi(int NewKi);

private:
    std::string nombre;
    std::string genero;
    int edad;
    float estatura;
    float peso;
    std::string ubicacion;
    std::string CabelloColor;
    int ki;

};




#endif //AAST_SAYAJIN_H
