/* 
 * File:   Node.h
 * Author: pedro
 */

#ifndef NODE_H
#define NODE_H
#include "Estudiante.h"

class Node {
public:
    Node();
    Node(Estudiante*);
    Node * getNext();
    void setNode(Node*);
    Estudiante* getEstudiante();
    void setEstudiante(Estudiante*);
    virtual ~Node();
private:
    Estudiante* estudiante;
    Node* next;  
};
#endif /* NODE_H */

