/* 
 * File:   Estudiante.cpp
 * Author: pedro
*/
#include "Estudiante.h"
#include <string>

Estudiante::Estudiante() {}

Estudiante::Estudiante(int carne, std::string nombre){
    this->carne = carne;
    this->nombre=nombre;
}

void Estudiante::setCarne(int carne){
    this->carne = carne;
}

void Estudiante::setNombre(std::string nombre){
    this->nombre = nombre;
}

int Estudiante::getCarne(){return carne;}

std::string Estudiante::getNombre(){return nombre;}

Estudiante::~Estudiante() {}

