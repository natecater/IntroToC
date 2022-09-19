/* 
What I would do differently here after seeing some of the solution
is to declare the loop vars as years/months rather than i/j
to help with readability

Additionally, make the output for each segment of the challenge part
of the calculation loops rather than separating them into calculation
and output loops after
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    //create array to store rainfall over 12 months for 5 years
    float rainfall[5][12] = {
        {1.2, 4.3, 9.1, 1.1, 5.1, 3.7, 8.3, 2.1, 2.9, 1.5, 0.0, 10.1}, 
        {5.2, 1.1, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 5.3, 5.6, 5.7},
        {2.3, 1.2, 3.4, 4.5, 3.3, 2.2, 1.1, 6.6, 7.7, 8.8, 9.9, 1.1},
        {0.0, 0.0, 0.0, 0.0, 5.4, 5.4, 6.7, 6.9, 6.9, 4.2, 4.2, 1.1},
        {1.1, 9.9, 9.6, 10.1, 11.2, 12.3, 15.4, 20.4, 100.4, 11.2, 1.1}
    };

    /*one var to store overall year average, a temporary sum for loops
      two arrays - one for each month's average and one for the total each yr
    */
    float mon_avg[12] = {};
    float yr_avg = 0.0;
    float yr_total[5] = {};
    float sum = 0.0;

    //this loop is to fill out the yearly total array for each 5 years
    for (int i = 0; i < 5; ++i) {

        sum = 0.0;

        for(int j = 0; j < 12; ++j) {
            sum += rainfall[i][j];
        }

        yr_total[i] = sum;
    }

    //this loop calculates the overal yearly average
    for (int i = 0; i < 5; ++i) {
        yr_avg += yr_total[i];
    }

    yr_avg = yr_avg/5;

    //calculate the monthly average
    for (int i = 0; i < 12; ++i) {

        sum = 0.0;

        for(int j = 0; j < 5; ++j) {
            sum += rainfall[j][i];
        }

        mon_avg[i] = sum/12;
    }

    // output
    printf("YEAR  RAINFALL (inches)\n");

    for(int i = 0; i <5; ++i) {
        printf("201%d  %.1f", i, yr_total[i]);
        printf("\n");
    }

    printf("\nThe Yearly average is %.1f inches.\n", yr_avg);
    printf("\nMONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for(int i = 0; i< 12; ++i) {
        printf("%.1f ", mon_avg[i]);
    }

}