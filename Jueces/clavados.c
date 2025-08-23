#include <stdio.h>
#include <stdbool.h>

#include "logica.h"

int main(void)
{

    int calificaciones[5][10]={{7,6,5,6,3},
                               {9,9,9,9,9},
                               {8,5,1,3,7},
                               {6,3,3,3,3},
                               {9,4,4,4,4},
                               {9,2,2,2,2},
                               {5,4,4,4,4},
                               {6,5,5,5,5},
                               {2,1,1,1,1},
                               {10,5,6,7,8}
                              };


    bool resultado=existeAlguno(calificaciones);

    if(resultado){
        printf("Existe al menos uno\n");
    }else{
        printf("No existe ese juez\n");
    }


    return 0;
}


