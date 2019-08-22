#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el tamaño del vector");
    scanf("%i", &n);
int vector[n];
int vector2[n];


    for (int i = 0; i < n; i++) {
        printf("Los valores del vector son\n");
        scanf("%i" ,&vector[i]);
        vector2[i]=vector[i];
    }
    printf("Los valores del vector 1 y su copia son:\n");

    for (int j = 0; j < n; j++){
        printf ("vector[%i%s%i%s",j,"]=",vector[j],"   ");
        printf("vector2[%i%s%i",j,"]=",vector2[j]);
    printf("\n");
    }
    return 0;
}