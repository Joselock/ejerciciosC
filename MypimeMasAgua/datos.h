#define MAX_REPORTES 30

struct camion{

    char chapa[6];
    char nombre[10];
    float capacidadCamion;

};

struct reporte{

    char direccion[50];
    int cantSirven;
    char nombreResponsable[10];
    char telefono[7];
    float capacidadCisterna;

};

struct consejo{

    char nombre[10];
    int cantPoblacion;
    struct reporte reportes[MAX_REPORTES];

};


struct NombresC{
    char nombre[100];
    //int mayorTotal;
};
