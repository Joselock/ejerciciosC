#define MaxPersonas 800
#define MaxConsultorios 20

typedef struct{
    char nombre[20];
    char numID[11];
    char direccion[20];
    char fechaE[8];
    bool esquemaCompleto;
    char fechaV[8];
}paciente;

typedef struct{
    int numConsultorio;
    char nombreMedico[20];
    char nombreEnfermera[20];
    char telefono[7];
    paciente Pacientes[MaxPersonas];
    int cantP;
}consultorio;

typedef struct{
    consultorio Consultorio[MaxConsultorios];
    int cantConsultorios;
}policlinico;
