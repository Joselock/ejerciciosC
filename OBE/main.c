#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "incisos.h"

int main(void)
{


    int i;
    char idS[5]="CR01";
    int tamanio;

    organizacion OBE= {
        {
            {
                "CR01",
                {
                    {
                        "C001",
                        "Juan",
                        "REL001",
                        {
                            "Enero",
                            "L001",
                            150
                        }
                    },
                    {
                        "C002",
                        "Maria",
                        "REL002",
                        {
                            "Febrero",
                            "L002",
                            200
                        }
                    }
                },
                {
                    "Marzo",
                    "L003",
                     350
                }
            },
            {
                "CR02",
                {
                    {
                        "C003",
                        "Pedro",
                        "REL003",
                        {
                            "Marzo",
                             "L003",
                            175
                        }
                    },
                    {
                        "C004",
                        "Ana",
                        "REL004",
                        {
                            "Abril",
                            "L004",
                            225
                        }
                    },
                    {
                        "C005",
                         "Luis",
                        "REL005",
                        {
                            "Mayo",
                            "L005",
                             190
                        }
                    }
                },
                {
                    "Mayo",
                    "L005",
                    590
                }
            }
        },
        2,
        5
    };


    /*printf("Ingrese la cant de clientes:");
    scanf("%d",&OBE.cantClientes);

    printf("Ingrese la cant de circunscripciones:");
    scanf("%d",&OBE.cantC);*/

    OBE.cantClientes=5;
    OBE.cantC=2;

    char identificadores[OBE.cantC][10];

    //Inciso b
    tamanio=obtenerID(identificadores,OBE);

    printf("Las circunscripciones son:\n");
    for(i=0;i<tamanio;i++){
        printf("-%s",identificadores[i]);
    }


    //Inciso c
    menoresC mostrar;
    mostrar=menoresConsumos(idS,OBE);

    printf("Menores consumos:\n");

    for(i=0;i<mostrar.cantCl;i++){
        printf("-%s",mostrar.id[i]);
    }
    printf("La menor cantidad es: %d",mostrar.cantConsumida);


    return 0;
}




