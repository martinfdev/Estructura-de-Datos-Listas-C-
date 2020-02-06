/* 
 * File:   Node.cpp
 * Author: pedro
 */

#include "Node.h"
#include <stddef.h>

Node::Node(){
    next = NULL;
}

Node::Node(Estudiante *estudiante) {
    this->estudiante = estudiante;
    next = NULL;
}

Node::~Node() {}

Node* Node::getNext(){
    return this->next;
}

void Node::setNode(Node* next){
    this->next=next;
}

Estudiante* Node::getEstudiante(){
    return estudiante;
}

void Node::setEstudiante(Estudiante* estudiante){
    this->estudiante = estudiante;
}
