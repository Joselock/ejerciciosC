#define MaxElementos 3000

typedef struct{
    int fila;
    int columna;
    int valor;
}elemento;


typedef struct{
    int distintosCero;
    int cantFilas;
    int cantColumnas;
}matriz;


typedef struct{
    elemento Elementos[MaxElementos];
    int cantE;
}unidimensional;
