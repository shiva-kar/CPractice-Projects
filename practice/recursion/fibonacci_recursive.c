#include <stdio.h>

int ways(int n);

int main(void){
	int till;
	printf("Till when: ");
	if (scanf("%d", &till) != 1 || till < 0) return 0;

	for (int i = 0; i <= till; i++) {
		int result = ways(i);
		printf("%d%s", result, i == till ? "\n" : " ");
	}
	return 0;
}

int ways(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return ways(n - 1) + ways(n - 2);
}
