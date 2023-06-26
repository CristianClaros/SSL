#include<assert.h>
#include<math.h>
#include "Conversion.h"

double farenheit(double f){
    return (5.0/9.0)*(f-32);
}

double celsius(double f){
    return f*(9.0/5.0)+32;
}

void test(){
    //Se usaron valores de Celsius que estan corroborados
    assert(celsius(-40) == -40.0);
    assert(celsius(0) == 32.0);
    assert(celsius(40) == 104.0);

    //Se usaron valores de Farenheit que estan corroborados
    assert(farenheit(-40) == -40.0);
    assert(farenheit(41) == 5.0);
    assert(farenheit(140) == 60.0);
}