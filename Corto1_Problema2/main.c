#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;


    printf("Ingrese el tamaño del array\n");
    scanf("%d", &n);

    int array[n];

    srand (time(NULL));
    for ( i = 0; i < n; ++i) {
        array[i] = rand()%10;
        printf("%d\t", array[i]);
    }

    int posicion;
    printf("Ingrese la posicion del elemento a borrar");
    scanf("%d", &posicion);

    array[posicion-1]=NULL;

    for ( i = 0; i < n; ++i) {
        printf("%d\t", array[i]);
    }


    return 0;
}