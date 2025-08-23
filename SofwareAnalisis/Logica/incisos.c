#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <Logica/incisos.h>

//Inciso b

aparecen mayorCant(articulo Articulos[],char idS[5]){

    int i,j;
    int tamanio=0;
    int mayorA=0;
    int veces=0;
    aparecen PalabraA;


    for(i=0;i<4;i++){//Aqui iria el maximo de articulos
        if(strcmp(idS,Articulos[i].id)==0){
            for(j=0;j<3;j++){//Aqui iria el maximo de palabras
                veces=Articulos[i].Palabras[j].cantApariciones;

                if(mayorA<veces){
                    strcpy(PalabraA.palabra[0],Articulos[i].Palabras[j].palabra);
                    mayorA=veces;
                    tamanio=1;
                }else if(mayorA==veces){
                    strcpy(PalabraA.palabra[tamanio],Articulos[i].Palabras[j].palabra);
                    tamanio++;
                }
            }
        }

    }
    PalabraA.cantAparece=mayorA;
    PalabraA.numPalabras=tamanio;

    return PalabraA;
}

//Inciso c
float promedioApariciones(articulo Articulos[],char palabraS[20]){

    int i,j;
    int articulos=0;
    int totalA=0;


    for(i=0;i<4;i++){//Aqui iria el maximo de articulos
      bool aparece=false;
        for(j=0;j<3;j++){//Aqui iria el maximo de palabras
            if(strcmp(palabraS,Articulos[i].Palabras[j].palabra)==0){
                aparece=true;
               totalA+=Articulos[i].Palabras[j].cantApariciones;
            }
        }
        if(aparece){
            articulos++;
        }
    }

    float promedio=totalA/articulos;

    return promedio;
}



//Inciso d

bool apareceTodos(articulo Articulos[],char palabraS[20]){

    int i,j;
    int cantArticulosA=0;
    bool apareceT=true;

    for(i=0;i<4;i++){//Aqui iria el maximo de articulos
        bool aparece=false;
        for(j=0;j<3;j++){//Aqui iria el maximo de palabras
            if(strcmp(palabraS,Articulos[i].Palabras[j].palabra)==0){
                aparece=true;
            }
        }
        if(aparece){
            cantArticulosA++;
        }
    }

    if(cantArticulosA<4){//Aqui iria el maximo de articulos
        apareceT=false;
    }


    return apareceT;
}
