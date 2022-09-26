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
        scanf("%s", temp);
        strcpy(input[i], temp);
    }

    int j = 0; 

    for(int i = 0; i < count; ++i) {
        if(strcmp(input[i], input[j]) < 1) {
            continue;
            ++j;
        }
        else if(strcmp(input[i], input[j]) > 1) {
            strcpy(temp, input[j]);
            strcpy(input[j], input[i]);
            strcpy(input[i], temp);
            ++j;
        }
    }

    for(int i = 0; i < count; ++i) {
        printf("%s\n", input[i]);
    }
}