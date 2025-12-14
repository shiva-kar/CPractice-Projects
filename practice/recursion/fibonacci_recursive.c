#include <stdio.h>

int fib(int n);

int main(void){
	int till;
	printf("Till when: ");
	if (scanf("%d", &till) != 1 || till < 0) return 0;

	for (int i = 0; i <= till; i++) {
		int result = fib(i);
		printf("%d%s", result, i == till ? "\n" : " ");
	}
	return 0;
}

int fib(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}