#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "incisos.h"


int main(void){


    char idS[5]="D004";
    char palabraS[20]="AI";
    int i;

    float promedio=0;



    articulo Articulos[4]={
        {
            "A001",
            "IA",
            "2020",
            "Informatica",
            {
                {"AI", 5},
                {"redes", 3},
                {"robotica", 2},
                {"IA", 4}
            }
        },
        {
            "B002",
            "Cambio Climatico",
            "2021",
            "Ecologia",
            {
                { "medioambiente", 7},
                {"calentamiento", 4},
                {"erocion", 5}
            }
        },
        {
            "C003",
            "Historia del Arte",
            "2019",
             "Arte",
            {
                {"renacimiento", 6},
                {"pintura", 3},
                {"escultura", 2},
            }
        },
        {
            "D004",
            "Avances en Medicina",
            "2022",
             "Medicina",
            {
                {"vacunas", 8},
                {"genetica",5},
                {"cirugia", 9}
            }
        }
    };






    //Inciso b
    aparecen P1;
    P1=mayorCant(Articulos,idS);
    printf("Las palabras son:\n");
    for(i=0;i<P1.numPalabras;i++){
        printf("-%s\n",P1.palabra[i]);
    }
    printf("La mayor cantidad de apariciones es: %d\n\n",P1.cantAparece);


    //Inciso c
    promedio=promedioApariciones(Articulos,palabraS);
    printf("El promedio es:%.2f\n\n",promedio);


    //Inciso d
    bool apareceEnTodos=apareceTodos(Articulos,palabraS);
    if(apareceEnTodos){
        printf("La palabra aparece en todos los articulos\n");
    }else{
        printf("No aparece en todos los articulos\n\n");
    }

    return 0;
}

