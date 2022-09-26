#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char input[100];
    printf("Please enter a sentence to reverse: ");
    gets(input);

    int i = strlen(input) - 1;

    while(i >= 0) {
        printf("%c", input[i]);
        --i;
    }

    printf("\n");
}