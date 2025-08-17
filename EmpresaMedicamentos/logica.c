#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <datos.h>
#include <incisos.h>

#define MaxFarmacias 30
#define MaxPacientes 500
#define CantMedicamentos 15


//Inciso b

int Necesidad(char idS[],char codigoS[],struct farmacia Farmacias[3]){
    int necesidad=0;
    int i,j,k;

    for(i=0;i<3;i++){
        int total=0;
        if(strcmp(Farmacias[i].id,idS)==0){
            for(j=0;j<3;j++){
                for(k=0;k<3;k++){
                    if(strcmp(Farmacias[i].Pacientes[j].Medicamentos[k].codigo,codigoS)==0){
                        total+=Farmacias[i].Pacientes[j].Medicamentos[k].cantidad;
                    }
                }
            }

        }
        necesidad+=total;
    }

    return necesidad;
}




//Inciso c

/*struct nombreP* mayorCant(struct farmacia Farmacias[3],struct nombreP Nombres[],int *tamanioL){

    int i,j,k;
    int mayorTotal=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int totalM=0;
            for(k=0;k<3;k++){
                totalM+=Farmacias[i].Pacientes[j].Medicamentos[k].cantidad;
            }
            if(mayorTotal<totalM){
                mayorTotal=totalM;
                *tamanioL=1;
                strcpy(Nombres[0].nombre,Farmacias[i].Pacientes[j].nombre);
            }else if(mayorTotal==totalM){
                strcpy(Nombres[*tamanioL].nombre,Farmacias[i].Pacientes[j].nombre);
                (*tamanioL)++;
            }
        }

    }

    return Nombres;
}*/

//OTRA VARIANTE DEL INCISO C HECHO CON ARREGLO BIDIMENSIONAL

int mayorCant(struct farmacia Farmacias[],char arregloN[][100]){

    int i,j,k;
    int mayorTotal=0;
    int tamanioL;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            int totalM=0;
            for(k=0;k<3;k++){
                totalM+=Farmacias[i].Pacientes[j].Medicamentos[k].cantidad;
            }
            if(mayorTotal<totalM){
                mayorTotal=totalM;
                tamanioL=1;
                strcpy(arregloN[0],Farmacias[i].Pacientes[j].nombre);
            }else if(mayorTotal==totalM){
                strcpy(arregloN[tamanioL],Farmacias[i].Pacientes[j].nombre);
                (tamanioL)++;
            }
        }

    }

    return tamanioL;

}


//Inciso d

int* entregar(int Entregas[],char codigoS[],struct farmacia Farmacias[3],struct medicamentosD mD,int* tamanio){

    int i,j,k;  
    int cantTotalE=0;
    int valor=0;
    int lugar=0;



    for(i=0;i<3;i++){
        int entregar=0;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if(strcmp(codigoS,Farmacias[i].Pacientes[j].Medicamentos[k].codigo)==0){
                    entregar+=Farmacias[i].Pacientes[j].Medicamentos[k].cantidad;

                }
            }
        }
        if(entregar>0){
        Entregas[lugar++]=entregar;
        //*tamanio=i+1;
        cantTotalE+=entregar;
        }
    }

    if(mD.cantidad<cantTotalE){
        Entregas=realloc(Entregas,sizeof(int));
        valor=mD.cantidad;
        valor/=3;
        Entregas[0]=valor;
        *tamanio=1;
    }

    return Entregas;
}

