/* 
 * File:   Estudiante.h
 * Author: pedro
 */

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Estudiante {
public:
    Estudiante();
    Estudiante(int, std::string);
    void setCarne(int);
    void setNombre(std::string);
    int getCarne();
    std::string getNombre();
    void imprimirDatos();
    virtual ~Estudiante();
private:
    int carne;
    std::string nombre;
};
#endif /* ESTUDIANTE_H */

