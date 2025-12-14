/*
Author: Shiva Kar
Topic: Mathematical Problem Solver (C)
Program: Prime Check (Range)
Input: Two integers a and b
Output: All prime numbers in [a, b] and total count
*/

#include <stdio.h>

static int is_prime(int n) {
    if (n < 2) return 0;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int a, b;
    printf("Enter range (a b): ");
    if (scanf("%d %d", &a, &b) != 2 || a > b) {
        printf("Invalid range.\n");
        return 1;
    }
    printf("Primes between %d and %d:\n", a, b);
    int count = 0;
    for (int n = a; n <= b; n++) {
        if (is_prime(n)) {
            printf("%d%s", n, (n == b) ? "\n" : " ");
            count++;
        }
    }
    printf("Count: %d\n", count);
    return 0;
}
