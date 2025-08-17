#define MaxFarmacias 30
#define MaxPacientes 500
#define CantMedicamentos 15

struct medicamento{
    char codigo[5];
    char nombre[20];
    char unidadM[10];
    int cantidad;
    char fechaR[10];
    char certificcado[20];
};

struct paciente{
    char numTarjetas[5];
    char nombre[20];
    char numIdentidd[11];
    char direccion[20];
    char numConsultorio[3];
    struct medicamento Medicamentos[CantMedicamentos];
};

struct farmacia{
    char id[5];
    char direccion[50];
    char municipio[20];
    char telefono[7];
    struct paciente Pacientes[MaxPacientes];
};

struct medicamentosD{
    char codigo[5];
    char nombre[20];
    char unidadM[20];
    float precio;
    int cantidad;
};

struct nombreP{
    char nombre[20];
};
