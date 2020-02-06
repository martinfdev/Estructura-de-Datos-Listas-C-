/* 
 * File:   LinkedList.cpp
 * Author: pedro
 */
#include <stddef.h>
#include <iostream>
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList() {
    header = NULL;
    // tail = NULL;
    size = 0;
}

int LinkedList::getSize() {
    return size;
}

void LinkedList::insertNode(Estudiante* estudiante) {
    //create new Node and set Value
    Node* aux = new Node(estudiante);
    aux->setNode(header);
    header = aux;
    size++;
}

Node LinkedList::searchNode(int carne) {
    Node* tmp = header;
    while (tmp != NULL) {
        if (tmp->getEstudiante()->getCarne() == carne) {
            return *tmp; //desreferenciando puntero para devolver un Nodo
        }
        tmp = tmp->getNext(); //set next Node pointer value
    }
    std::cout << "No existe Nodo";
    return *tmp;
}

void LinkedList::deletNode(int carne) {
    Node* tmp = header;
    if (isEmpty()) {
        std::cout << "Lista vacia! \n";
    } else {
        if (header->getEstudiante()->getCarne() == carne) {
            header = header->getNext();
            size--;
        } else {
            while (tmp->getNext()->getEstudiante()->getCarne() != carne) {
                tmp = tmp->getNext(); //set next Node pointer value
            }
            std::cout<<tmp->getNext()->getEstudiante()->getCarne()<<"\t"<<tmp->getNext()->getEstudiante()->getNombre()<<"\n";
            Node* next =tmp->getNext()->getNext(); 
            tmp->setNode(next);
            size--;
        }
    }
}

void LinkedList::printList() {
    Node* tmp = header;
    while (tmp != NULL) {
        std::cout << tmp->getEstudiante()->getCarne() << "\t";
        std::cout << tmp->getEstudiante()->getNombre() << "\n";
        tmp = tmp->getNext(); //set next value pointer Node
    }
}

bool LinkedList::isEmpty() {
    if (header == NULL) {
        return true;
    }
    return false;
}

LinkedList::~LinkedList() {
}

