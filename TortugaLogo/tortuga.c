#include <stdio.h>

#define MAX_INSTR 100
#define N 50

void tortuga(float instrucciones[MAX_INSTR],char tablero[N][N],int cant){

    int i,j;
    int f = 0, c = 0;    // posicion actual: fila y columna
    int pluma = 1;       // 1 = arria , 2 = abajo
    int d = 2;           // 1 = norte , 2 = este , 3 = sur , 4 = oeste
    int ejecutando = 1;  // bandera para parar al recibir 9

    //1) Inicializar tablero en cero
   for (i = 0; i < N; i++){
        for (j = 0; j < N; i++){
            tablero[i][j]=0;
        }
        
    }


    //2) Procesar comandos
     for (i = 0; i < cant && ejecutando; i++){
        float instrF = instrucciones[i];
        int cmd = (int)instrF;
        int pasos, df=0, dc = 0;

        if (cmd == 1){
            // pluma arriba
            pluma = 1;
        }
        else if(cmd == 2){
            // pluma abajo
            pluma = 2;
        }
        else if (cmd == 3){
            // giro a la derecha
            d = (d%4)+1;
        }
        else if (cmd == 4){
            d = (d == 1 ? 4 : d-1);
        }
        else if (cmd == 5){

            // extraer la cantidad de pasos: parte decimal multiplicada por 100
            pasos = (int)((instrF-5.0f)*100 + 0.5f);

            // vector de movimiento segun direccion 
            if (d == 1)       df = -1;  // norte
            else if(d == 2)   dc = 1;   // este
            else if(d == 3)   df = 1;   // sur
            else if(d == 4)   dc = -1;  // oeste

            if(pluma == 2){
                
                // pluma abajo: dibujar en cada paso
                for (i = 0; i < pasos; i++){
                    f += df;
                    c += dc;

                    //opcional: validar limites
                    if(f >= 0 && f < N && c >= 0 && c < N){
                        tablero[f][c]=1;
                    }
                }
                
            }else{
                // pluma arriba: solo mover
                f += df * pasos;
                c += dc * pasos;
            }
            
        }else if(cmd == 9){
            // fin del los datos : marcar bandera para salir
            ejecutando = 0;
        }
        // cualquier otro cmd se ignora;
     }
     
}



// Funcion prueba: dibujar un cuadrado 12 x 12 e imprimirlo
int main(){

    float comandos[MAX_INSTR] = {2, 5.12f, 3, 5.12f, 3, 5.12f, 3, 5.12f, 1 , 9};
    char tablero[N][N];
    int i,j;

    // ejecutar tortuga con 10 comandos
    tortuga(comandos,tablero,10);

    // imprimir tablero: '*' para las lineas y ' ' para vacio
    for (i = 0; i < N; i++){
        for (j = 0; j < N; i++){
            putchar(tablero[i][j] ? '*' : ' ');
        }
        putchar('\n');
    }
    
    return 0;
}