#include <stdio.h>

int main() {
    long long i;
    printf("Enter a positive integer: ");
    if (scanf("%lld", &i) != 1 || i <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    while (i != 1) {
        if (i % 2 != 0) {
            i = 3 * i + 1; 
        } else {
            i /= 2;
        }
        printf("%lld\n", i);
    }

    return 0;
}