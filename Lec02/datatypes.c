#include <stdio.h>

int main(){
    int iNumber = 0; //Around -32k to 32k. This is a signed integer.
    unsigned uUnsigned = 0; // This is an unsigned integer. Around 0-60k.
    char cLetter = 'A'; //Only one character can be in here.
    float fFloat = 1.1; //Can have decimals.
    double dDoubleStuff = 10.11; //Higher Precision
    
    printf("The value of cLetter is %c, which is %d\n", cLetter, cLetter); //%c is a placeholder for a character variable...
    return 0;
}