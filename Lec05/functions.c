#include <stdio.h>

int product(int, int);
int product2(int, int);
int product3(int, int *);

int main(){
    int a=0,b=0;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %i and %i.", a, b);
    product3(a,&b);
    
    return 0;
}

int product(int x, int y){
    int result = x*y;
    return result;
}

int product2(int x, int y){
    int result = x*y;
    x=5;
    y=10;
    return result;
}

int product3(int x, int *y){
    int result = x * (*y);
    return result;
}
