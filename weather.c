#include <stdio.h>
#include <stdlib.h>

int main() {

    float rainfall[5][12] = {
        {1.2, 4.3, 9.1, 1.1, 5.1, 3.7, 8.3, 2.1, 2.9, 1.5, 0.0, 10.1}, 
        {5.2, 1.1, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 5.3, 5.6, 5.7},
        {2.3, 1.2, 3.4, 4.5, 3.3, 2.2, 1.1, 6.6, 7.7, 8.8, 9.9, 1.1},
        {0.0, 0.0, 0.0, 0.0, 5.4, 5.4, 6.7, 6.9, 6.9, 4.2, 4.2, 1.1},
        {1.1, 9.9, 9.6, 10.1, 11.2, 12.3, 15.4, 20.4, 100.4, 11.2, 1.1}
    }

    float mon_avg[12] = {};
    float yr_avg = 0.0;
    float yr_total[5] = {};
    float sum = 0.0;

    for (int i = 0; i < 5; ++i) {

        sum = 0.0;

        for(int j = 0; j < 12; ++j) {
            sum += rainfall[i][j];
        }

        yr_total[i] = sum;
    }

    for (int i = 0; i < 5; ++i) {
        yr_avg += yr_total[i];
    }

    yr_avg = yr_avg/5;

    for (int i = 0; i < 12; ++i) {

        sum = 0.0;

        for(int j = 0; j < 5; ++j) {
            sum += rainfall[j][i];
        }

        mon_avg[i] = sum/12;
    }

    printf("YEAR  RAINFALL (inches)\n");

    for(int i = 0; i <5; ++i) {
        printf("201%d  %f", i, yr_total[i]);
        printf("\n");
    }

    printf("\nThe Yearly average is %f inches.\n", yr_avg);
    printf("\nMONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec");

    for(int i = 0; i< 12; ++i) {
        printf("%f ", mon_avg[i]);
    }

}