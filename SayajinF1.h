//
// Created by Alumnos on 11/04/2024.
//

#ifndef AAST_SAYAJINF1_H
#define AAST_SAYAJINF1_H

#include "Sayajin.h"

class SayajinF1 : public Sayajin {

    SayajinF1();
    SayajinF1(std::string ubicacion, std::string CabelloColor, int ki);
    SayajinF1(const SayajinF1 &rhs);
    SayajinF1(std::string ubicacion, std::string CabelloColor, int ki, std::string especialidad, int velocidad, std::string desgaste);

    SayajinF1(std::string ubicacion, std::string CabelloColor, int ki, std::string especialidad, std::string desgaste,
              int velocidad);

    ~SayajinF1() = default;

    std::string getEspecialidad() const;
    void setEspecialidad(std::string NewEspecialidad);

    std::string getDesgaste() const;
    void setDesgaste(std::string NewDesgaste);

    int getVelocidad() const;
    void setVelocidad(int NewVelocidad);

private:
    std::string especialidad;
    std::string desgaste;
    int velocidad;
    std::string ubicacion;
    std::string CabelloColor;
    int ki;

};


#endif //AAST_SAYAJINF1_H
