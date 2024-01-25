#include <stdio.h>

int main(){
    float fCelsius, fFahrenheit = 0;
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%f", &fFahrenheit);
    fCelsius = (fFahrenheit -32) / 9 * 5;
    printf("%4.1fF is %4.1fC\n", fFahrenheit,fCelsius);

    return 0;
}