//
// Created by Alumnos on 21/03/2024.
//

#include "FloatCell.h"

//Constructor pinrcipal
FloatCell::FloatCell() {
    this -> flotante = 0;
}

//Constructor copia
FloatCell::FloatCell(const FloatCell &rhs) {
    flotante = rhs.flotante;
}

//Constructor parametros
FloatCell::FloatCell(float flotante) {
    this -> flotante = flotante;
}

//Operador FloatCell IGUAL =
FloatCell &FloatCell::operator= (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante IGUAL =
FloatCell &FloatCell::operator= (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

//Operador FloatCell SUMA +
FloatCell &FloatCell::operator+ (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante SUMA +
FloatCell &FloatCell::operator+ (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

//Operador FloatCell RESTA -
FloatCell &FloatCell::operator- (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante RESTA -
FloatCell &FloatCell::operator- (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

//Operador FloatCell MULTIPLICACION *
FloatCell &FloatCell::operator* (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante MULTIPLICACION *
FloatCell &FloatCell::operator* (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

//Operador FloatCell DIVISION /
FloatCell &FloatCell::operator/ (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante DIVISION /
FloatCell &FloatCell::operator/ (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

//Operador FloatCell MODULO %
FloatCell &FloatCell::operator% (FloatCell rhs) {
    this -> flotante = rhs.flotante;
}

//Operador NuevoFlotante MODULO %
FloatCell &FloatCell::operator% (float NuevoFlotante) {
    if(flotante != NuevoFlotante){
        this -> flotante = NuevoFlotante;
    }
}

