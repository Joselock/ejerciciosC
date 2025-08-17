#define MaxClientes 1000
#define MaxCircun 100

typedef struct{
    char mes[20];
    char idLector[5];
    int cantKw;
}UL;

typedef struct{
    char idCliente[5];
    char nombre[10];
    char numReloj[11];
    UL lecturaCL;
}cliente;

typedef struct{
    char idC[5];
    cliente ClientesC[MaxClientes];
    UL lecturaC;
}circun;

typedef struct{
    circun Circunscris[MaxCircun];
    int cantC;
    int cantClientes;
}organizacion;

typedef struct{
    int cantCl;
    int cantConsumida;
    char id[MaxClientes][5];
}menoresC;
