/*
Author: Shiva Kar
Topic: Pattern Generation (C)
Program: Number Triangle
Input: Integer n (rows)
Output: Triangle pattern with numbers 1..i on each row
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Rows (1..20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) { printf("Invalid.\n"); return 1; }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
