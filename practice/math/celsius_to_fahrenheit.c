#include <stdio.h>

int main(void) {
	double c;
	printf("Enter temperature in Celsius: ");
	if (scanf("%lf", &c) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	double f = c * 9.0 / 5.0 + 32.0;
	printf("Fahrenheit: %.2f\n", f);
	return 0;
}