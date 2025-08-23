#include <stdio.h>
#include <stdbool.h>

void mayoresNotas(int calificaciones[10][5],int mayores[10]){

    int i,j;
    int tamanio=0;

    for(i=0;i<10;i++){
        int maximaC=0;
        for(j=0;j<5;j++){
            if(maximaC<calificaciones[i][j]){
                maximaC=calificaciones[i][j];
            }
        }
        mayores[tamanio]=maximaC;
        tamanio++;
    }

  /*  for(i=0;i<10;i++){
        printf("-%d\n",mayores[i]);
    }*/
}

bool existeAlguno(int calificaciones[10][5]){

    bool existe=false; 
    int mayoresC[10]={0};
    int i,j;
    int pos=0;

    mayoresNotas(calificaciones,mayoresC);

    for(i=0;i<5 && !existe;i++){
          bool cumple=true;
        for(j=0;j<10 && cumple;j++){
            if(calificaciones[j][i]!=mayoresC[pos]){
                cumple=false;

            }else if(pos<10){
                //printf("Si\n");
               pos++;
            }
        }
        existe=cumple;
    }


    return existe;
}

