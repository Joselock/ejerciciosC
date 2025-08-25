#include <stdio.h>
#include <stdbool.h>

#include "logica.h"

int main(void)
{

    int arregloE[5][5] = {
           {2, 5, 3, 8, 4},
           {7, 2, 8, 4, 3},
           {1, 9, 2, 8, 5},
           {6, 3, 7, 2, 9},
           {4, 1, 5, 6, 9}
       };
    int cantF=5;
    int cantC=5;

    bool resultado=ordenAscendente(arregloE,cantF,cantC);

    if(resultado){
        printf("Tiene orden ascendente.\n");
    }else{
        printf("No tiene orden ascendente.\n");
    }

    return 0;
}