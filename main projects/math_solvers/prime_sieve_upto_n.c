/*
Author: Shiva Kar
Topic: Mathematical Problem Solver (C)
Program: Prime Sieve (Up To N)
Input: Integer n
Output: All primes <= n and total count
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n (2..100000): ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 100000) {
        printf("Please enter a valid n.\n");
        return 1;
    }

    char is_prime[100001];
    for (int i = 0; i <= n; i++) is_prime[i] = 1;
    is_prime[0] = 0;
    is_prime[1] = 0;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int k = p * p; k <= n; k += p) is_prime[k] = 0;
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++) if (is_prime[i]) count++;

    printf("Primes <= %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) printf("%d ", i);
    }
    printf("\nCount: %d\n", count);
    return 0;
}
