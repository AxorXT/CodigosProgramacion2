//
// Created by Alumnos on 16/04/2024.
//

#include "Poderes2.h"

Poderes2::Poderes2() {
    this -> PoderEsp = "N/A";
    this -> Fase = "N/A";
    this -> Aumento = 0;
}

Poderes2::Poderes2(std::string PoderEsp, std::string Fase, int Aumento) {
    this -> PoderEsp = PoderEsp;
    this -> Fase = Fase;
    this -> Aumento = Aumento;
}

Poderes2::Poderes2(const Poderes2 &rhs) {
    PoderEsp = rhs.PoderEsp;
    Fase = rhs.Fase;
    Aumento = rhs.Aumento;
}