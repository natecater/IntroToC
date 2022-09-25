#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(char a[]);
void concatStr(char r[], char a[], char b[]);
int strEqual(char a[], char b[]);
char result[100];

int main() {

    //declare and init some strings
    char str1[] = "Hello my name is Nate.";
    char str2[] = " And I'm learning how to code.";
    char str3[] = "Hello my name is Nate.";

    // check string length func
    printf("String length is: %i\n", stringLength(str1));

    // check string concatenation func
    concatStr(result, str1, str2);
    printf("%s\n", result);

    // check string comparison func
    printf("Are str1 and str2 equal? %s\n", strEqual(str1, str2) ? "yes" : "no");
    printf("Are str1 and str3 equal? %s\n", strEqual(str1, str3) ? "yes" : "no");
}

// Function to compare 2 strings and see if they are the same
// by checking each character and the length
int strEqual(char a[], char b[]) {
    int result = 1;
    int i = 0;

    while (a[i] == b[i] && 
          a[i] != '\0' &&
          b[i] != '\0') 
        ++i;

    if (a[i] == '\0' && a[i] == '\0')
        result = 1;
    else
        result = 0;

    return result;
}

// function to concatenate 2 strings together
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

// function to check the length of a string
int stringLength(char a[]){
    unsigned int count = 0;
    while(a[count]) {
        ++count;
    }

    return count;
}

