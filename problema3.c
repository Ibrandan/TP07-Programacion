#include <stdio.h>
#include "problema3.h"
#define TAMA 10
int main(void) {

    float numeros[TAMA], promedio = 0, promMenor = 10;
    int longitud;

    cargarArreglo(numeros, TAMA);

    longitud = sizeof(numeros)/sizeof(numeros[0]);

    for(int i = 0; i < longitud; i++) {
        if (numeros[i] < promMenor) {
            promMenor = numeros[i];
        } 
        promedio += numeros[i];
    }

    printf("El promedio mas bajo es: %.1f", promMenor);
    printf("El promedio general del curso es: %.1f", promedio/longitud);

    mostrarArreglo(numeros, TAMA);
    return 0;
}