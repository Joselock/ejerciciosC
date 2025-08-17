#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "datos.h"
#include "incisos.h"

#define MaxFarmacias 30
#define MaxPacienes 500
#define CantMedicamentos 15


int main(void)
{

    char idS[5]="F001";
    char codigoS[5]="M001";
    int* Entregas=malloc(3*sizeof(int));


   struct medicamentosD mD={"M001", "Paracetamol", "mg", 10.5, 5000};

    struct farmacia Farmacias[3]={
    { // Farmacia 1
        "F001",
        "Av. Principal 123",
       "Ciudad A",
         "1111111",
          {
            { // Paciente 1 - Farmacia 1
                 "T001",
                 "Juan Pérez",
                 "ID111111111",
                 "Calle 1 #101",
                 "101",
                {
                    { "M001", "Paracetamol","mg", 100,  "2024-01-01",  "CERT001" },
                    { "M002",  "Ibuprofeno",  "mg",  50,  "2024-02-01",  "CERT002" },
                    { "M003",  "Amoxicilina",  "mg",  30,  "2024-03-01", "CERT003" }
                }
            },
            { // Paciente 2 - Farmacia 1
                 "T002",
                "María López",
                "ID222222222",
                 "Calle 2 #202",
                 "102",
                {
                    {  "M001",  "Omeprazol",  "mg",  20,  "2024-04-01",  "CERT004" },
                    { "M005",  "Loratadina",  "mg",  40,  "2024-05-01",  "CERT005" },
                    {  "M006",  "Diclofenaco", "mg",  60,  "2024-06-01",  "CERT006" }
                }
            },
            { // Paciente 3 - Farmacia 1
                 "T003",
                 "Carlos Gómez",
                 "ID333333333",
                 "Calle 3 #303",
                "103",
                 {
                    {  "M007","Atorvastatina",  "mg", 25,  "2024-07-01",  "CERT007" },
                    {  "M008",  "Metformina",  "mg",  35,  "2024-08-01",  "CERT008" },
                    { "M009",  "Aspirina", "mg",  80, "2024-09-01", "CERT009" }
                }
            }
        }
    },
    { // Farmacia 2
        "F002",
         "Av. Central 456",
        "Ciudad B",
         "2222222",
         {
            { // Paciente 1 - Farmacia 2
                 "T004",
                "Ana Rodríguez",
                 "ID444444444",
                 "Calle 4 #404",
                 "201",
                 {
                    { "M001", "Cetirizina",  "mg", 45, "2024-10-01", "CERT010" },
                    {  "M011", "Losartán",  "mg",  55,  "2024-11-01","CERT011" },
                    {  "M012", "Dexametasona", "mg",  65,  "2024-12-01","CERT012" }
                }
            },
            { // Paciente 2 - Farmacia 2
                 "T005",
               "Luis Hernandez",
                "ID555555555",
                "Calle 5 #505",
                "202",
                {
                    { "M013",  "Clonazepam", "mg",  60, "2025-01-01",  "CERT013" },
                    {  "M014", "Sertralina", "mg",  70,  "2025-02-01",  "CERT014" },
                    { "M015", "Metronidazol", "mg",80, "2025-03-01", "CERT015" }
                }
            },
            { // Paciente 3 - Farmacia 2
                "T006",
                "Laura Diaz",
                "ID666666666",
                "Calle 6 #606",
                 "203",
                {
                    { "M016",  "Ciprofloxacino",  "mg",  5,  "2025-04-01",  "CERT016" },
                    { "M017",  "Hidroclorotiazida", "mg", 5, "2025-05-01", "CERT017" },
                    { "M018",  "Prednisona",  "mg",9,  "2025-06-01",  "CERT018" }
                }
            }
        }
    },
    { // Farmacia 3
        "F003",
        "Av. Norte 789",
        "Ciudad C",
         "3333333",
        {
            { // Paciente 1 - Farmacia 3
                 "T007",
                "Pedro Sánchez",
                 "ID777777777",
                "Calle 7 #707",
                 "301",
                {
                    {  "M001", "Warfarina",  "mg",  10,  "2025-07-01",  "CERT019" },
                    {  "M020",  "Insulina",  "UI",  5,  "2025-08-01",  "CERT020" },
                    {  "M021",  "Levotiroxina",  "mg", 20,  "2025-09-01",  "CERT021" }
                }
            },
            { // Paciente 2 - Farmacia 3
                "T008",
                "Sofia Ramirez",
                 "ID888888888",
                "Calle 8 #808",
                "302",
                {
                    { "M022",  "Diazepam", "mg", 60,"2025-10-01","CERT022" },
                    {  "M023",  "Ranitidina",  "mg",  70, "2025-11-01", "CERT023" },
                    {  "M024", "Fluoxetina",  "mg",  80,  "2025-12-01","CERT024" }
                }
            },
            { // Paciente 3 - Farmacia 3
                 "T009",
                "Jorge Castro",
                 "ID999999999",
                 "Calle 9 #909",
                "303",
               {
                    { "M025",  "Tramadol",  "mg",  60,  "2026-01-01",  "CERT025" },
                    {  "M026",  "Metoclopramida",  "mg",  70, "2026-02-01",  "CERT026" },
                    { "M027",  "Ketorolaco",  "mg", 80,  "2026-03-01", "CERT027" }
                }
            }
        }
    }
};



    //INCISO B
    int necesidad=Necesidad(idS,codigoS,Farmacias);

    printf("La necesidad es:%d",necesidad);

    //-------------------------------------------------------------------------------
    //-------------------------------------------------------------------------------


    //INCISO C

    //Primera Opcion
    /*int tamanioL;
    struct nombreP Nombres[tamanioL];
    struct nombreP* Nombres2=mayorCant(Farmacias,Nombres,&tamanioL);
    printf("\n\nNombres:\n");
    int i;
    for(i=0;i<tamanioL;i++){
        printf("%s\n",Nombres2[i].nombre);
    }*/


    //Segunda Opcion
    int tamanio2;
    char arregloN[1][100]={" "};
    tamanio2=mayorCant(Farmacias,arregloN);
    printf("\n\nNombres:\n");
    int i;
    for(i=0;i<tamanio2;i++){
        printf("%s\n",arregloN[i]);
    }
     printf("\n");

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
     //INCISO D
    int tamanio;
    entregar(Entregas,codigoS,Farmacias,mD,&tamanio);

    int j;
    printf("La cantidad a entregar es:");
    for(j=0;j<tamanio;j++){
        printf("%d\n\n",Entregas[j]);
    }

    free(Entregas);

    return 0;
}

