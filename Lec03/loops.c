#include <stdio.h>
int main(){
    int i = 0;
    int j = 0;
    while(i<10){
        printf("%d " , i);
        i++;
    }
    printf("\n");
    do{
        printf("%i ", j);
        j++;
    } while(j<10);
    printf("\n");

    for(int k=0;k<10;k++){
        printf("%d ", k);
    }
    return 0;
}