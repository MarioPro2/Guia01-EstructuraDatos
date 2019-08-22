#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Ingrese el tamaño del vector:  ");
    scanf("%i", &n);
    double vector[n];
    double suma=0;
    double suma2=0;
    double media, desviacion, varianza;

    for (int i = 0; i < n; ++i) {
        printf("Ingrese el numero [%i%s", i + 1, "]:  ");
        scanf("%lf", &vector[i]);
        suma=suma+vector[i];
    }

    media=suma/n;

    for (int j = 0; j <n ; ++j) {
        suma2 = suma2 + pow((vector[j] - media), 2);
    }

    varianza=suma2/n;
    desviacion=sqrt(varianza);
    printf("\nLos datos ingresados son los siguientes:\n");
    for (int k = 0; k <n; ++k) {
        printf("\n[%lf%s",vector[k],"]"".");
    }

    printf("\n");
    printf("\nSu media es: %lf",media);
    printf("\n");
    printf("Su varianza es: %lf",varianza);
    printf("\n");
    printf("Su desviacion tipica es: %lf",desviacion);

    return 0;
}