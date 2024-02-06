#include <stdio.h>
#include <string.h>

int main(){

    char* string1 = "Hello, World!";

    printf("String1 = %s\n", string1);
    // string1[5] = 'X';
    // printf("String1 = %s\n", string1);


    char string2[25] = "Hello, World!";
    printf("String2 = %s\n", string2);

    string2[5] = 'X';
    printf("String2 = %s\n", string2);

    for (int i=0;i<strlen(string2); i++){
        printf("string[%d] = %c (%d)\n",i,string1[i],string2[i]);
    }



    return 0;
}