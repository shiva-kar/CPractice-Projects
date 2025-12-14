#include <stdio.h>

int main(void)
{
    int num;
    printf("Number of star rows: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        for (int s = 0; s < num - i; s++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}