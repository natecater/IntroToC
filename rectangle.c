#include <stdio.h>

int main() {

    double width = 2.0;
    double height = 3.0;
    double perim = 0.0;
    double area = 0.0;

    perim = 2 * (width + height);
    area = width * height;

    printf("The perimeter of the rectangle with width %.2f and height %.2f is: %.2f\nThe area of the rectange with width %.2f and height %.2f is: %f", width, height, perim, width, height, area);
    return 0;
}