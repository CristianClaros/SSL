#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED


double celsius(double);
double farenheit(double);

void printTablas(int LOWER, int UPPER, int STEP);
void printTablaCelsius(int LOWER, int UPPER, int STEP);
void printTablaFarenheit(int LOWER, int UPPER, int STEP);
void printFilas(int LOWER, int UPPER, int STEP, double (*funcion)(double));
void printFila(int fila, double (*funcion)(double));

void test();

#endif