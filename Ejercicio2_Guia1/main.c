#include <stdio.h>

int main() {
    printf("Ingrese el tamaño del vector:");
    int n;
    scanf("%i", &n);
    int vector[n];
    int pos;

    for (int i = 0; i < n; ++i) {
        printf("Ingrese el numero %i%s",i+1,":");
        scanf("%i", &vector[i]);
    }
    printf("ingrese la posicion que desea eliminar(1-%i%s",n,"):");
    scanf("%i", &pos);
    for (int j = pos; j < n; ++j) {
        vector[j-1]=vector[j];
        int vector[n-1];

    }
    printf("El nuevo vector es:\n");
    for (int k = 0; k < n-1; ++k) {
        printf("vector[%i%s%i",k,"]=",vector[k]);
        printf("\n");

    }




    return 0;
}