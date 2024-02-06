#include <stdio.h>

int main(){
    int x =5;
    int *p =0; //When a pointer is initialized to 0 it means that it is a "null pointer"

    printf("x = %2d, p = %p\n", x, p);
    // printf("x = %2d, *p = %d, p = %p, \n", x,*p, p); // Segmentation Fault (Core Dumped)
    // Segmentation Fault means you went out of bounds of where your storage should be.

    p = &x;
    printf("x = %2d, *p = %2d, p = %p\n", x,*p, p);

    x=15;
    printf("x = %2d, *p = %2d, p = %p\n", x,*p, p);

    *p = 17;
    printf("x = %2d, *p = %2d, p = %p\n", x,*p, p);

    int y = 50;
    printf("x = %2d, y=%2d, *p = %2d, p = %p\n", x,y,*p, p);

    p = &y;
    printf("x = %2d, y=%2d, *p = %2d, p = %p\n", x,y,*p, p);


    return 0;
}