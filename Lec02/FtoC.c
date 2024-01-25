#include <stdio.h>

int main(){
    int iCelsius, iFahrenheit = 98;
    iCelsius = (iFahrenheit -32) / 9 * 5;
    printf("%dF is %dC\n", iFahrenheit,iCelsius);

    float fCelsius, fFahrenheit = 98;
    fCelsius = (fFahrenheit -32) / 9 * 5;
    printf("%4.1fF is %4.1fC\n", fFahrenheit,fCelsius);

    return 0;
}