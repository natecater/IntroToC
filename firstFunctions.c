#include <stdio.h>
#include <stdlib.h>

//function to determine greatest common divisor, returns a float and should take positive values
int gcd(int a, int b) {
    int tracker = 0;

    if(a < 0  || b < 0){
        printf("Positive values only.\n");
        return 0;
    }

    while (b != 0){
        tracker = a % b;
        a = b;
        b = tracker;
    }

    return a;
}

//returns the absolute value of a number, takes and returns floats
float absoluteVal(float a){
    if (a < 0)
        a *= -1;
    
    return a;
}

//function to determine square root of a number, takes a float and returns a float
float squareRoot(float a) {
    if (a < 0) {
        printf("Please enter a positive value.\n");
        return -1.0;
    }
    
    float i;
    i = a;
    while (i > 0) {
        if(i * i == a) {
            return i;
        }
        --i;
    }
    
}

int main() {

    int a = 20;
    int b = 10;
    int c = -10;
    int d = -4;
    float e = -3.5;
    int f = 64;
    float g = 64.0;

    //test cases for gcd function:
    printf("The greatest common divisor of %i and %i is: %d\n", a, b, gcd(a, b));
    printf("The greatest common divisor of %i and %i is: %d\n", a, c, gcd(a, c));
    printf("The greatest common divisor of %i and %.2f is: %d\n", a, g, gcd(a, g));

    //test cases for absolute function:
    printf("The absolute value for %i is: %.2f\n", d, absoluteVal(d));
    printf("The absolute value for %i is: %.2f\n", a, absoluteVal(a));
    printf("The absolute value for %.2f is: %.2f\n", e, absoluteVal(e));

    //test cases for square root function:
    printf("The square root of %i is: %.2f\n", f, squareRoot(f));
    printf("The square root of %.2f is: %.2f\n", g, squareRoot(g));
    printf("The square root of %i is: %.2f\n", d, squareRoot(d));

}