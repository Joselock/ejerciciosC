#include <stdio.h>
#include <stdbool.h>

#include "logica.h"

int main(void)
{

    char cadena1[]="HolaMundos";
    char cadena2[]="HolaMundos";

    bool resultado=parentezco(cadena1,cadena2);


    if(resultado){
        printf("Son parecidas\n");
    }else{
        printf("No son parecidas\n");
    }


    return 0;
}
