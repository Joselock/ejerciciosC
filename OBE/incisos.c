#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "datos.h"

//Inciso b
int obtenerID(char identificadores[][10],organizacion OBE){

    int i,j;
    int tamanio;


    for(i=0;i<OBE.cantC;i++){
        int consumidosT=0;
        int servidos=0;
        float difiere=0;

        for(j=0;j<OBE.cantClientes;j++){
            consumidosT+=OBE.Circunscris[i].ClientesC[j].lecturaCL.cantKw;
        }

        servidos=OBE.Circunscris[i].lecturaC.cantKw;

        difiere=(servidos-consumidosT)/servidos;

        if(difiere>0.05){
            strcpy(identificadores[tamanio],OBE.Circunscris[i].idC);
            tamanio++;
        }
    }

    return tamanio;
}


//Inciso c

menoresC menoresConsumos(char idS[5],organizacion OBE){

    int i,j;
    int tamanio=0;
    int consumo=0;
    int menorC=1000;
    menoresC resultado;

    for(i=0;i<OBE.cantC;i++){
        if(strcmp(idS,OBE.Circunscris[i].idC)==0){
            for(j=0;j<OBE.cantClientes;j++){
                consumo=OBE.Circunscris[i].ClientesC[j].lecturaCL.cantKw;

                if(consumo!=0 && menorC>consumo){
                    strcpy(resultado.id[0],OBE.Circunscris[i].ClientesC[j].idCliente);
                    menorC=consumo;
                    tamanio=1;
                }else if(consumo!=0 && menorC==consumo){
                    strcpy(resultado.id[tamanio],OBE.Circunscris[i].ClientesC[j].idCliente);
                    tamanio++;
                }
            }
        }
    }

    resultado.cantConsumida=menorC;
    resultado.cantCl=tamanio;

    return resultado;
}