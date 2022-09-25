#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(char a[]);
void concatStr(char r[], char a[], char b[]);
bool strEqual();
char result[100];

int main() {

    char str1[] = "Hello my name is Nate.";
    char str2[] = " And I'm learning how to code.";
    printf("String length is: %i\n", stringLength(str1));

    concatStr(result, str1, str2);

    unsigned int count = 0;

    while(result[count]) {
        printf("%c", result[count]);
        ++count;
    }

    printf("\n");
}

void concatStr(char r[], char a[], char b[]) {
    unsigned int count1 = 0;
    unsigned int count2 = 0;

    while(a[count1]) {
        r[count1] = a[count1];
        ++count1;
    }

    while(b[count2]) {
        r[count1] = b[count2];
        ++count1;
        ++count2;
    }


}

int stringLength(char a[]){
    unsigned int count = 0;
    while(a[count]) {
        ++count;
    }

    return count;
}

