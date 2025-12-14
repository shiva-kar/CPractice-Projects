/*
Author: Shiva Kar
Topic: Mathematical Problem Solver (C)
Program: Factorial (Iterative)
Input: Integer n (0..20)
Output: n! as an unsigned 64-bit value
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n (0..20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter 0..20.\n");
        return 1;
    }
    unsigned long long result = 1ULL;
    for (int i = 2; i <= n; i++) result *= (unsigned long long)i;
    printf("%d! = %llu\n", n, result);
    return 0;
}
