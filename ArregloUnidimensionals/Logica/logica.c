#include <stdio.h>
#include <stdlib.h>


int existeEnArreglo(int arregloU[], int elementos, int valor) {
    int existe=0;
    int i;

    for (i = 0; i < elementos; i++) {
        if (arregloU[i] == valor) {
            existe =1;
        }
    }
    return existe;
}

/*int* insertarElementos(int arregloU[],int arregloB[20][15],int *elementos,int capacidad){



    int i,j;

    for(i=0;i<20;i++){
        for(j=0;j<15;j++){
            int valor=arregloB[i][j];
            if(!existeEnArreglo(arregloU,*elementos,valor)){
                if(*elementos==capacidad){
                    capacidad*=2;
                    arregloU=(int*)realloc(arregloU,capacidad*sizeof(int));

                }
                arregloU[*elementos]=valor;
                (*elementos)++;
            }

        }
    }

   // arregloU=(int*)realloc(arregloU,(*elementos)*sizeof(int));

    //printf("%d",sizeof(arregloU));

    return arregloU;
}*/

int otro(int* arregloU[],int arregloB[20][15],int capacidad){

   // *arregloU=(int*)malloc(200);

    int i,j,elementos=0;

    for(i=0;i<20;i++){
        for(j=0;j<15;j++){
            int valor=arregloB[i][j];
            if(!existeEnArreglo(*arregloU,elementos,valor)){
               if(elementos==capacidad){
                    capacidad*=2;
                    *arregloU=(int*)realloc(*arregloU,capacidad*sizeof(int));

                }
                (*arregloU)[elementos]=valor;
                elementos++;
            }

        }
    }

    ordenar(*arregloU,elementos);

    return elementos;
}

void ordenar(int arregloU[],int elementos){

    int i,j,aux;

    for(i=0;i<elementos-1;i++){
        for(j=i+1;j<elementos;j++){
            if(arregloU[j]<arregloU[i]){
                aux=arregloU[i];
                arregloU[i]=arregloU[j];
                arregloU[j]=aux;
            }
        }
    }

}



/*int valores[5]={4,1,3};
int cant=4;
int i;
while(i<cant){
    if(valores[i]%2!=0){
        valores[i++]+=1;
    }else{
        valores[i++]/=3;
    }
}*/
