#include <stdio.h>

int main() {

    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    enum company google = Google;
    enum company xerox = Xerox;
    enum company ebay = Ebay;

    printf("Xerox is: %d\nGoogle is: %d\nEbay is: %d\n", xerox, google, ebay);
    return 0;

}