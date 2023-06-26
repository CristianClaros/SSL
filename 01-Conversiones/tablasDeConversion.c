#include<stdio.h>
#include "conversion.h"

void printTablaCelsius(int LOWER, int UPPER, int STEP){
    printf("\nCelsius a Fahrenheit\n");

    printFilas(LOWER, UPPER, STEP, celsius);
}

void printTablaFarenheit(int LOWER, int UPPER, int STEP){
    printf("\nFarenheit a Celsius\n");

    printFilas(LOWER, UPPER, STEP, farenheit);
}

void printTablas(int LOWER, int UPPER, int STEP){
    printTablaCelsius(LOWER, UPPER, STEP);
    printTablaFarenheit( LOWER, UPPER, STEP);
}

void printFilas(int LOWER, int UPPER, int STEP, double (*funcion)(double)){

    for(int valor = LOWER; valor <= UPPER; valor = valor + STEP)
        printFila(valor, (*funcion));
}

void printFila(int fila, double (*funcion)(double)){
    printf("%3d %6.1f\n", fila, (double)(*funcion)(fila) );
}