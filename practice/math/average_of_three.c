#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers (a b c): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    float avg = (a + b + c) / 3.0f;
    printf("Average: %.2f\n", avg);
    return 0;
}