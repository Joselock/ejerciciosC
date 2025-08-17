#include <stdio.h>

#include "logica.h"
#include "datos.h"

#define MAX_CAMIONES 15

int main(void)
{

    int numConsejos;


    printf("Ingrese el numero de consejos: \n");
    scanf("%d",&numConsejos);

    struct camion camiones[MAX_CAMIONES] = {
    {"ABC123", "Camion1", 5000},
    {"DEF456", "Camion2", 7500},
    {"GHI789", "Camion3", 10000},
    {"JKL012", "Camion4", 3000},
    {"MNO345", "Camion5", 8000}
};

    struct consejo Consejos[3]= {
    {"ConsejoA", 1000, {{"Calle 1", 50, "Juan", "1234567", 2000}, {"Calle 2", 30, "Pedro", "7654321", 15000}}},
    {"ConsejoB", 1500, {{"Avenida X", 80, "Maria", "1111111", 3000}, {"Avenida Y", 40, "Luisa", "2222222", 2500}, {"Avenida Z", 60, "Carlos", "3333333", 40000}}},
    {"ConsejoC", 800, {{"Boulevard A", 20, "Ana", "4444444", 1000}, {"Boulevard B", 35, "Luis", "5555555", 18000}}}
};

    struct NombresC consejos[numConsejos];

    mayorCantInvolucrados(numConsejos,Consejos,consejos);

    satisfacerDemanda(numConsejos,Consejos,camiones);

    if(!satisfacerSolicitudes(numConsejos,Consejos,camiones)){
        printf("No se puede satisfacer la demanda\n\n");
    }else{
        printf("Se pudo satisfacer la demanda\n\n");
    }



    return 0;
}

