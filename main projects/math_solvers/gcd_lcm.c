/*
Author: Shiva Kar
Topic: Mathematical Problem Solver (C)
Program: GCD & LCM Calculator
Input: Two integers a and b
Output: GCD(a, b) and LCM(a, b)
*/

#include <stdio.h>

static int abs_int(int x) { return x < 0 ? -x : x; }

static int gcd(int a, int b) {
    a = abs_int(a);
    b = abs_int(b);
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    int g = gcd(a, b);
    long long l = (g == 0) ? 0 : ((long long)abs_int(a) / g) * (long long)abs_int(b);

    printf("GCD(%d, %d) = %d\n", a, b, g);
    printf("LCM(%d, %d) = %lld\n", a, b, l);
    return 0;
}
