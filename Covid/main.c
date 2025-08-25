#include <stdio.h>

#include "logica.h"

int main(void)
{

    policlinico P /*=inicializarDatos()*/;

    consultorio C;

    int numC/*=obtenerConsultoio*/;
    char nombres[C.cantP][20];


    //Inciso b
    int tamanio=cantConsultorios(P);

    //Inciso c
    int tamanioN=obtenerNombres(P,numC,nombres);

    return 0;
}
