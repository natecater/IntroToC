#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int randN = rand() % 21;
    int guess = -1;
    int n = 0;
    int try = 0;

    printf("Guess a number between 0 to 20: ");
    scanf("%d", &guess);


    for(try = 5; try > 0; --try) {

        while(guess < 0 || guess > 20) {
        printf("Please submit a valid number between 0 to 20: ");
        scanf("%d", &guess);
        }

        if (guess == randN) {
            printf("Good guess! you got it.\n");
            try = 0;
        } 
        else if (guess < randN) {
            printf("You have %i tries left.\n", try);
            printf("Nice try! Your guess is too low.\n");
            printf("Guess again: ");
            scanf("%d", &guess);
        }
        else if (guess > randN) {
            printf("You have %i tries left.\n", try);
            printf("Nice try! Your guess is too high.\n");
            printf("Guess again: ");
            scanf("%d", &guess);
        }
    }
}