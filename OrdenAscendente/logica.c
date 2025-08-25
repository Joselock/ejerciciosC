#include <stdio.h>
#include <stdbool.h>

void calcularSumatoria(int arregloE[5][5],int cantF,int cantC,int sumatoria[5]){

    int i,j;

    for(i=0;i<cantC;i++){
        int suma=0;
        for(j=0;j<cantF;j++){
            suma+=arregloE[j][i];
        }
        sumatoria[i]=suma;
    }

}


bool ordenAscendente(int arregloE[4][5],int cantF,int cantC){

    int i;
    int sumatoria[5];
    bool ascendente=true;

    calcularSumatoria(arregloE,cantF,cantC,sumatoria);

    for(i=0;i<cantC-1;i++){
        if(sumatoria[i]>sumatoria[i+1]){
            ascendente=false;
        }
    }

    return ascendente;
}
