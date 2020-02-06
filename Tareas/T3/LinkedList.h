/* 
 * File:   LinkedList.h
 * Author: pedro
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include "Estudiante.h"


class LinkedList {
public:
    LinkedList();
    void insertNode(Estudiante*);
    void deletNode(int);
    bool isEmpty();
    Node searchNode(int);
    int getSize();
    void printList();
    virtual ~LinkedList();
private:
    Node* header;
   // Node* tail;
    int size;
};

#endif /* LINKEDLIST_H */

