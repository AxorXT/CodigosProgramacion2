//
// Created by Alumnos on 16/04/2024.
//

#ifndef AAST_PODERES2_H
#define AAST_PODERES2_H
#include <iostream>

class Poderes2 {
public:

    Poderes2(); //Constructor default
    Poderes2(const Poderes2 &rhs); //Constructor de copia
    Poderes2(std::string PoderEsp, std::string Fase, int Aumento); //Constructor Parametros
    ~Poderes2() = default;


    std::string getPoderEsp() const;
    void setPoderEsp(std::string PoderEsp);

    std::string getFase() const;
    void setFase(std::string Fase);

    int getAumento () const;
    void setAumento(int Aumento);

private:
    std::string PoderEsp;
    std::string Fase;
    int Aumento;

};

};


#endif //AAST_PODERES2_H
