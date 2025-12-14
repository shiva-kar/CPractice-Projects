/*
Author: Shiva Kar
Topic: Mathematical Problem Solver (C)
Program: Fibonacci (Iterative)
Input: Integer n (0..46)
Output: Fibonacci sequence values from F(0) to F(n)
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter n (0..46): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 46) {
        printf("Please enter 0..46.\n");
        return 1;
    }
    int a = 0, b = 1;
    for (int i = 0; i <= n; i++) {
        printf("%d%s", (i == 0) ? 0 : (i == 1 ? 1 : (a + b)), i == n ? "\n" : " ");
        if (i >= 2) { int next = a + b; a = b; b = next; }
    }
    return 0;
}
