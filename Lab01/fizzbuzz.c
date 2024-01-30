#include <stdio.h>
// Write a C program fizzbuzz that prompts the user to enter an arbitrary integer:
// fizzbuzz prints each number between 0 and the entered number on a separate line as follows:
// If the number is multiple of 3, the program prints Fizz;
// If the number is multiple of 5, the program prints Buzz;
// If the number is multiples of both 3 and 5, the program prints FizzBuzz.
// fizzbuzz must include a loop to iterate over all integers in the given range.
// fizzbuzz must include a function that takes a single integer as a parameter and produces the correct output for that integer.
// Use three test cases to verify the correctness of your code by entering the following numbers at the fizzbuzz prompt: -1, 5, 28.

int fizz_buzz(int iUserInput){
    for(int i=0;i<iUserInput;i++){

    if (i%3!=0 && i%5!=0){
        printf("%i",i);
    }
    else{
        if (i%3==0){
            printf("Fizz");
        }
        if(i%5==0){
            printf("Buzz");
        }
        }
    printf("\n");
    }
    return 0;
}

int main(){
    int iUserInput = 0;

    printf("Please enter a number for FizzBuzz: ");
    scanf("%i", &iUserInput);

    if (iUserInput<0){
            printf("Negative doesn't fizz buzz. ");
    }else {
        fizz_buzz(iUserInput);
    }
    return 0;
}