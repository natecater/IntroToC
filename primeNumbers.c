#include <stdio.h>

int main() {

    int primes[50] = {1, 2};
    int count = 1;
    int non_prime_flag = 0;

    for(int i = 3; i < 100; i++) {

        if (i % 2 == 0) {
            continue;
        }
        else {
            for (int j = 1; j < (i-1); j++) {

                non_prime_flag = 0;
                count = 1;

                if (i % primes[j] == 0) {
                    non_prime_flag = 1;
                    break;
                }
                else {
                    continue;
                    count++;
                }
            }
            if (non_prime_flag == 0) {
                primes[count] = i;
            }
        }

    }
    for (int prime = 0; prime < 50; prime++) {
        printf("%d", primes[prime]);
    }

}