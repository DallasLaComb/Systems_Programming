#include <stdio.h>
#include <string.h>

void strcpy1(char* dest, const char* src){
    int i = 0;
    while (src[i]!=0){
        dest[i]=src[i];
        i++;
    }
    dest[i]=0;
}

int main(){

    char string[100] = "Hello, World!";
    char string2[100];

    strcpy1(string2, string);// First is destinaton, second is the thing you want copied.
    printf("String2 = %s\n", string2);


    return 0;
}