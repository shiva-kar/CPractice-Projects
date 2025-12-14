/*
Author: Shiva Kar
Topic: Pattern Generation (C)
Program: Hollow Square Pattern
Input: Integer n (side length)
Output: Hollow square of '*' characters
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Size (2..20): ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 20) { printf("Invalid.\n"); return 1; }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i==0 || j==0 || i==n-1 || j==n-1) printf("*"); else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
