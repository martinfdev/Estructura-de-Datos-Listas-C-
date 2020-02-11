#include <stdlib.h>
#include <cstdlib>
#include "LinkedDoubleList.h"
#include <math.h>


int main(int argc, char** argv){
LinkedDoubleList* listadoble = new LinkedDoubleList();
listadoble->insertarPrimero('h');
listadoble->insertarPrimero('o');
listadoble->insertarPrimero('l');
listadoble->insertarPrimero('a');
listadoble->show();
listadoble->borrarFinal();
listadoble->show();

listadoble->buscar("a");



return EXIT_SUCCESS;
}