#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


int main () {
    int n = 69;

    int *pN = &n;

    printf("The address of the pointer is: %p\n", (void*)&pN);
    printf("The value of the pointer is: %p\n", pN);
    printf("The value of n is: %d\n", *pN);
}