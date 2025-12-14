#include <stdio.h>

static unsigned long long factorial(int n) {
	return (n <= 1) ? 1ULL : (unsigned long long)n * factorial(n - 1);
}

int main(void) {
	int n;
	printf("Enter n (0..20): ");
	if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
		printf("Please enter an integer between 0 and 20.\n");
		return 1;
	}
	printf("%d! = %llu\n", n, factorial(n));
	return 0;
}