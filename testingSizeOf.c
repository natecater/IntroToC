#include <stdio.h>

int main() {

    printf("Int size: %zd\nChar size: %zd\nLong size: %zd\nLonglong size: %zd\nDouble size: %zd\nLong double size: %zd", sizeof(int), sizeof(char), sizeof(long), sizeof(long long), sizeof(double), sizeof(long double));

    return 0;

}