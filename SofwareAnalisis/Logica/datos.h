#define MaxArticulos 5000
#define MaxPalabras 100


typedef struct{
    char palabra[20];
    int cantApariciones;
}palabraClave;


typedef struct{
    char id[5];
    char titulo[20];
    char anio[4];
    char materia[20];
    palabraClave Palabras[MaxPalabras];
}articulo;

typedef struct{
    char palabra[MaxPalabras][20];
    int cantAparece;
    int numPalabras;
}aparecen;
