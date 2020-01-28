//librerias y directivas del preprocesador
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


//prototipo de funcion
void fillMatrixEdges(int size);


int main()
{
    int sizeMatrix;
    std::cout << "Ingrese el tamaño de la matriz: ";
    std::cin >> sizeMatrix;
    fillMatrixEdges(sizeMatrix);
    return EXIT_SUCCESS;
}

void fillMatrixEdges(int size)
{
     char matriz[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            //valores maximos y minimos en la matriz
            if(i==0 || i==size-1 || j==0 || j==size-1)
            {
                matriz[i][j]='1';
                std::cout <<"1";
            }else{
                matriz[i][j]=' ';
                std::cout<<" ";
            }
        }
        std::cout<<"\n";  
    }        
}



