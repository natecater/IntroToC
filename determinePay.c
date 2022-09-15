#include <stdio.h>

int main () {

    double hours = 0.0;
    double basicPay = 12.0;
    double overtime = 18.0;
    double gross = 0.0;
    double aftertax = 0.0;

    printf("How many hours did you work this week?");
    scanf("%lf", &hours);

    if (hours <= 40)
        gross = hours * basicPay;
    else
        gross = (40 * basicPay) + (hours - 40) * overtime;

    if (gross <= 300)
        aftertax = gross - (gross * 0.15);
    else if (gross > 300 && gross <= 450)
        aftertax = gross - (300 * 0.15) - ((gross - 300) * 0.20);
    else 
        aftertax = gross - (300 * 0.15) - (150 * 0.20) - ((gross - 450) * 0.25);

    printf("Your aftertax payout for working %f hours is %f", hours, aftertax);

    return 0;
}