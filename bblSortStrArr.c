#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char input[10][100];
    int count = 0;
    char temp[100];

    printf("Input number of strings: ");
    scanf("%i", &count);

    printf("\nInput %i strings: ", count);

    for(int i = 0; i < count; ++i) {
        scanf("%s", input[i]);
    }

    for(int i = 1; i < count; ++i) {
        for(int j = 0; j<=count-i; j++) {
            if(strcmp(input[j], input[j+1]) > 0) {
            strcpy(temp, input[j]);
            strcpy(input[j], input[j+1]);
            strcpy(input[j+1], temp);
            ++j;
            }
        }
    }
    
    for(int i = 0; i < count; ++i) {
        printf("%s\n", input[i]);
    }
}