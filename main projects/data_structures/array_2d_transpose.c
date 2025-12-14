/*
Author: Shiva Kar
Topic: Data Structures Basics (C)
Program: Matrix Transpose (2D Array)
Input: Matrix size r x c and r*c integers
Output: Transposed matrix (c x r)
*/

#include <stdio.h>

int main(void) {
    int r, c;
    printf("Rows and cols (<=10): ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0 || r > 10 || c > 10) {
        printf("Enter valid sizes.\n");
        return 1;
    }
    int a[10][10];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            if (scanf("%d", &a[i][j]) != 1) return 1;
        }
    }
    printf("Transpose:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d%s", a[i][j], (i == r - 1) ? "\n" : " ");
        }
    }
    return 0;
}
