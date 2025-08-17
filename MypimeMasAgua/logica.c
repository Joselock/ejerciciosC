#include <stdio.h>
#include <string.h>

#include "datos.h"

#define MAX_REPORTES 30
#define MAX_CAMIONES 15

//Inciso b

void mayorCantInvolucrados(int numConsejos, struct consejo Consejos[],struct NombresC consejos[]){

    int i,j;
    int cont=0;
    int mayorTotal=0;


    for(i=0;i<numConsejos;i++){
        int totalP=0;
        for(j=0;j<MAX_REPORTES;j++){
            totalP+=Consejos[i].reportes[j].cantSirven;
        }

        if(mayorTotal<totalP){
            strcpy(consejos[0].nombre,Consejos[i].nombre);
            mayorTotal=totalP;
            cont=1;
        }else if(mayorTotal==totalP){
            strcpy(consejos[cont].nombre,Consejos[i].nombre);
            cont++;
        }

    }



    printf("Los nombres son:\n");
    for(i=0;i<cont;i++){
    printf("-: %s\n",consejos[i].nombre);
    }
    printf("\n");

}



//Inciso c
void satisfacerDemanda(int numConsejos, struct consejo Consejos[],struct camion camiones[]){

    float demanda=0;
    int totalViajes=0;
    int i,j;

    //demanda total
    for(i=0;i<numConsejos;i++){
        for(j=0;j<MAX_REPORTES;j++){
            demanda+=Consejos[i].reportes[j].capacidadCisterna;
        }
    }

    while(demanda>0){
        demanda-=mayorCapacidad(camiones);
        totalViajes++;
    }

    printf("Cantidad de viajes: %d\n\n" ,totalViajes);
}



//mayor capacidad
int mayorCapacidad(struct camion camiones[]){
    float mayor=0;
    int i;

    for(i=0;i<MAX_CAMIONES;i++){
        if(mayor<camiones[i].capacidadCamion){
            mayor=camiones[i].capacidadCamion;
        }
    }
    return mayor;
}



//Inciso d

int satisfacerSolicitudes(int numConsejos, struct consejo Consejos[],struct camion camiones[]){
    int maxCapacidad=0;
    int capacidadTotalDia=0;
    float demanda=0;
    int i,j;



    for(i=0;i<numConsejos;i++){
        for(j=0;j<MAX_REPORTES;j++){
            demanda+=Consejos[i].reportes[j].capacidadCisterna;
        }
    }

    maxCapacidad=mayorCapacidad(camiones);


    capacidadTotalDia=MAX_CAMIONES*5*maxCapacidad;

    return (capacidadTotalDia >= demanda) ? 1 : 0;
}
