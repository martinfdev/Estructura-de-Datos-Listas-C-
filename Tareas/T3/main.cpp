/* 
 * File:   main.cpp
 * Author: pedro
 */
#include <iostream>
#include "Estudiante.h"
#include "LinkedList.h"
#include "Node.h"

int main(int argc, char** argv) {
    
    LinkedList* list = new LinkedList();
    list->insertNode(new Estudiante(124, "Pedrin"));
    list->insertNode(new Estudiante(1235, "Nancy"));
    list->insertNode(new Estudiante(234, "Martin"));
    list->insertNode(new Estudiante(436345, "Sarha"));
    list->insertNode(new Estudiante(1, "Jhon"));
    list->printList();
    std::cout<<"===========Busqueda============\n";
    Node aux = list->searchNode(1);
    std::cout<< aux.getEstudiante()->getCarne()<<"  ";
    std::cout<< aux.getEstudiante()->getNombre()<<"\n";
    std::cout<< "=============Eliminar==========\n";
    list->deletNode(234);
    std::cout<< "============= Lista ==========\n";
    list->printList();
    return EXIT_SUCCESS;
}

