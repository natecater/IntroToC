#include <stdio.h>
#include <stdlib.h>

int main () {

    int minute = 0;
    double minInYr = 60 * 24 * 365.0;
    double year = 0.0;
    double day = 0.0;

    printf("Enter in the minutes you'd like to convert to years and days: ");
    scanf("%d", &minute);

    year = minute/minInYr;
    day = minute / 24 / 60;

    printf("For %d minutes you entered, there are %f years and %f days", minute, year, day);


    return 0;
}