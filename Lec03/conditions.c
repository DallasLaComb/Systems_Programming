#include <stdio.h>

int main(){
    int iAge = 0;
    printf("How old are you? ");
    int iReturnValue = scanf("%d", &iAge);
    if(iReturnValue!=1){
        printf("scanf() could not interpret your input\n");
        return 1;
    }
    if(iAge>=0 &&  iAge<=120) {
        if (iAge<21)
            printf("You can't legally enjoy alcohol\n");
        else 
            printf("Your age is %d, you are over 21 \n", iAge);
    }
    else{
            printf("You entered %d which is an invalid age. \n", iAge);

    }

    return 0;
}