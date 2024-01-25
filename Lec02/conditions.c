#include <stdio.h>

int main(){
    int iAge = 0;
    printf("How old are you? ");
    int iReturnValue = scanf("%d", &iAge);
    if(iReturnValue!=1){
        printf("scanf() could not interpret your input\n");
        return 1;
    }
    printf("Your age is %d\n",iAge);


    return 0;
}