#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool parentezco(char cadena1[10],char cadena2[10]){

    bool cumple=false;
    char palabra1[11];
    char palabra2[11];
    int tamanio=0;
    int i,cont=0;


    int length1=strlen(cadena1);
    int length2=strlen(cadena2);


    //CONVERTIR A MINUSCULA
    for(i = 0;i<length1; i++) {
        palabra1[i] = tolower(cadena1[i]);
    }
    palabra1[i] = '\0';


    for(i = 0;i<length2; i++) {
        palabra2[i] = tolower(cadena2[i]);
    }
    palabra2[i] = '\0';




    //TAMAÑO PARA LA SIGUIENTE FOR
    if(length1<length2 || length1==length2){
        tamanio=length2;
    }else{
        tamanio=length1;
    }


   
    if(strcmp(palabra1,palabra2)==0){//Si las palabras son iguales
        cumple=true;

    }else{
        for(i=0;i<tamanio;i++){
            if(palabra1[i]!= palabra2[i]){//Si las palabras se diferencian en un solo caracter
                cont++;
            }
        }

        if((cont==1 && (length1==length2)) || (cont==1 && (length1-length2==1 || length1-length2==-1))){//Si el tamaño difiere en 1

            cumple=true;
        }
    }



    return cumple;
}