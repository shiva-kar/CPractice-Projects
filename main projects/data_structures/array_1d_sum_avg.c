/*
Author: Shiva Kar
Topic: Data Structures Basics (C)
Program: 1D Array Sum & Average
Input: Array size n and n integers
Output: Sum and average of the entered values
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Array size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Enter 1..100.\n");
        return 1;
    }
    int arr[100];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        if (scanf("%d", &arr[i]) != 1) return 1;
    }
    long sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %ld, Avg = %.2f\n", sum, (double)sum / n);
    return 0;
}
