#include <stdio.h>

#include "logica.h"

#define MaxElementos 3000

//Inciso b
void cantPorFila(unidimensional U,matriz matrizE,int arregloValores[]){

    int i;
    int fila=1;
    int cantEF=0;

    while(fila<=matrizE.cantFilas){

        for(i=1;i<U.cantE;i++){
            if(U.Elementos[i].fila==fila){
                cantEF++;
            }
        }
        arregloValores[i]=cantEF;

        fila++;
    }

}


int numeroFilas(unidimensional U,matriz matrizE,int filas[]){

    int i,j;
    int tamanio=0;
    int mayoresCant=0;
    int arregloValores[MaxElementos];// arreglo para guardar las cantidades de elementos por fila
    int mayoresValores[MaxElementos];// arreglo para guardar solo las mayores cantidades de elementos por fila


    cantPorFila(U,matrizE,arregloValores);

    for(i=0;i<U.cantE;i++){
        if(mayoresCant<arregloValores[i]){
            mayoresValores[0]=arregloValores[i];
            mayoresCant=arregloValores[i];
            tamanio=1;
        }else if(mayoresCant==arregloValores[i]){
            mayoresValores[tamanio]=arregloValores[i];
            tamanio++;
        }// busco quienes son las mayores cantidades y las guardo en el arreglo
    }

    int aux=0;

    for(i=0;i<tamanio;i++){
        for(j=1;j<matrizE.cantFilas;j++){
            if(mayoresValores[i]==arregloValores[j]){
                filas[aux]=j;
                aux++;
            }
        }/*COMPARO LAS MAYORES CANTIDADES CON LAS CANTIDADES DE ELEMENTOS POR FILA Y SI
        SON IGUALES ME QUEDO CON EL LUGAR QUE OCUPA EN EL ARREGLO QUE CONCUERDA CON LAS FILAS A LAS QUE PERTENECE
        */
    }

    return aux;

}