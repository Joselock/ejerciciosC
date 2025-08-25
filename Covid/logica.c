#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "logica.h"


//Inciso b

int cantConsultorios(policlinico P){

    int i,j;
    int tamanio=0;
    int mayorP=0;

    for(i=0;i<P.cantConsultorios;i++){
        int totalV=0;
        int parteEC=0;
        float porCiento=0;
        for(j=0;j<P.Consultorio[i].cantP;j++){
            bool esquemaC=P.Consultorio[i].Pacientes[j].esquemaCompleto;
            int Edad=edad(P.Consultorio[i].Pacientes[j].numID);

            if(esquemaC){
                parteEC++;
            }
            if(Edad>=2){
                totalV++;
            }
        }

        porCiento=(parteEC*100)/totalV;

        if(porCiento>mayorP){
            mayorP=porCiento;
            tamanio=1;
        }else if(porCiento==mayorP){
            tamanio++;
        }
    }

    return tamanio;
}

//Inciso c

int obtenerNombres(policlinico P,int numC,char nombres[][20]){


    int i,j;
    int tamanioN=0;
    bool encontrado=false;

    for(i=0;i<P.cantConsultorios && !encontrado;i++){
        if(numC==P.Consultorio[i].numConsultorio){
            for(j=0;j<P.Consultorio[i].cantP;j++){
                char FechaV[8]=P.Consultorio[i].Pacientes[j].fechaV;
                char FechaE[8]=P.Consultorio[i].Pacientes[j].fechaE;

                if(strcmp(FechaV,"00000000")==0 && strcmp(FechaE,"00000000")==0){
                    strcpy(nombres[tamanioN],P.Consultorio[i].Pacientes[j].nombre);
                    tamanioN++;
                }
            }
        }
    }


    return tamanioN;

}

