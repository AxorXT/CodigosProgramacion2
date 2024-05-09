//
// Created by Alumnos on 21/03/2024.
//

#ifndef AAST_FLOATCELL_H
#define AAST_FLOATCELL_H


class FloatCell {

    FloatCell(); //Constructor default
    FloatCell(const FloatCell &rhs); //Constructor de copia
    FloatCell(float flotante); //Constructor Parametros
    ~FloatCell() = default;

    //Operador IGUAL =
    FloatCell &operator= (FloatCell rhs);
    FloatCell &operator= (float NuevoFlotante);

    //Operador SUMA +
    FloatCell &operator+ (FloatCell rhs);
    FloatCell &operator+ (float NuevoFlotante);

    //Operador RESTA -
    FloatCell &operator- (FloatCell rhs);
    FloatCell &operator- (float NuevoFlotante);

    //Operador MULTIPLICACION *
    FloatCell &operator* (FloatCell rhs);
    FloatCell &operator* (float NuevoFlotante);

    //Operador DIVISION /
    FloatCell &operator/ (FloatCell rhs);
    FloatCell &operator/ (float NuevoFlotante);

    //Operador MODULO %
    FloatCell &operator% (FloatCell rhs);
    FloatCell &operator% (float NuevoFlotante);

private:
    float flotante;

};


#endif //AAST_FLOATCELL_H
