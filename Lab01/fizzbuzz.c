#include <stdio.h>

int fizz_buzz(int iUserInput){
    if (iUserInput%3!=0 && iUserInput%5!=0){
        printf("%i",iUserInput);
            printf("\n");
    }
    else{
        if (iUserInput%3==0){
            printf("Fizz");
        }
        if(iUserInput%5==0){
            printf("Buzz");
        }
    printf("\n");
    }
    return 0;
}
int main(){
    int iUserInput = 0;

    printf("Please enter a number for FizzBuzz: ");
    scanf("%i", &iUserInput);
    if (iUserInput>0){
        for (int i =0; i<=iUserInput; i++){
            fizz_buzz(i);
        }
    }
    else{
        for (int i=0; i>=iUserInput; i--){
            fizz_buzz(i);
        }
    }
    return 0;
}