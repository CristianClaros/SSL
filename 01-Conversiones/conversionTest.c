#include<stdio.h>
#include "conversion.h"


int main(void){

    const int LOWER = 0; // lower limit of table
    const int UPPER = 300; // upper limit
    const int STEP = 20; // step size

    //Esta funcion implementa los ASSERT para hacer pruebas con valores especificos
    test();

    //Imprimo las tablas a modo de ejemplo con valores definidos con LOWER, UPPER, STEP
    printTablas(LOWER, UPPER, STEP);

    return 0;
}