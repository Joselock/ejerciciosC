#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool parentezco(char cadena1[10],char cadena2[10]){

    bool cumple=false;
    char palabra1[11];
    char palabra2[11];
    int i,j,cont=0;


    int length1=strlen(cadena1);
    int length2=strlen(cadena2);


    //CONVERTIR A MINUSCULA
    for(i = 0;i<length1; i++) {
        palabra1[i] = tolower(cadena1[i]);
    }



    for(i = 0;i<length2; i++) {
        palabra2[i] = tolower(cadena2[i]);
    }





    if(strcmp(palabra1,palabra2)==0){//Si las palabras son iguales
        cumple=true;

    }else if(abs(length1-length2)==1){

        for(i=0,j=0;i<length1 && j<length2;i++,j++){

            if(palabra1[i]!=palabra2[j]){
                cont++;

                if(length1<length2){
                    j--;
                }else{
                    i--;
                }
            }


        }
        if(cont<=1){
            cumple=true;
        }

    }else if(length1==length2){
        for(i=0;i<length1;i++){
            if(palabra1[i]!=palabra2[i]){
                cont++;
            }
        }

        if(cont<=1){
            cumple=true;
        }
    }



    return cumple;
}
