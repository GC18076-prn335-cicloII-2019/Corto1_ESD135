#include <stdio.h>

int main() {
    double matriz[5][5];
    char disponibilidad[5][5];
    int opcion;
    int fila, columna;
    float ganancia = 0;

    for (int i = 0; i < 5; ++i) {
        matriz[0][i] = 5;
        matriz[1][i] = 3.5;
        matriz[2][i] = 3.5;
        matriz[3][i] = 3.5;
        matriz[4][i] = 2.5;
    }

    do{
        printf("\nIngrese el numero de la ocpion Que desea\n1.Vender entradas\n2.Ver ganacias\nOtro numero para salir\n");
        scanf("%d", &opcion);
        if (opcion == 1){
            do{
                printf("Precios\nFila 1: $5.0\nFila 2,3,4: $3.5\n$Fila 5: $2.5\n");
                printf("O: cupado, D: disponible\n");
                for (int i = 0; i < 5; ++i) {
                    for (int j = 0; j < 5; ++j) {
                        if (matriz[i][j] == 0){
                            disponibilidad[i][j] = 'O';
                        } else {
                            disponibilidad[i][j] = 'D';
                        }
                        printf("%c\t", disponibilidad[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
                printf("Ingrese la fila: ");
                scanf("%d", &fila);
                printf("Ingrese columna: ");
                scanf("%d", &columna);
                if (matriz[fila-1][columna-1] == 0){
                    printf("asiento ocupado o  no existe\n");
                }
            }while (matriz[fila-1][columna-1] == 0);
            matriz[fila-1][columna-1] = 0;
            if (fila == 1){
                ganancia += 5;
            }else if (fila == 5){
                ganancia += 2.5;
            } else {
                ganancia += 3.5;
            }
        } else if (opcion == 2){
            printf("Ganacia Total: %f", ganancia);
        }
    }while (opcion >= 1 && opcion <= 3);


    return 0;
}