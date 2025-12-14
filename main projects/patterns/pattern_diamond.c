/*
Author: Shiva Kar
Topic: Pattern Generation (C)
Program: Diamond Pattern
Input: Integer n (half height)
Output: Symmetric diamond of '*' characters
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Size (1..20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) { printf("Invalid.\n"); return 1; }
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int k = 0; k < 2*i - 1; k++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int k = 0; k < 2*i - 1; k++) printf("*");
        printf("\n");
    }
    return 0;
}
