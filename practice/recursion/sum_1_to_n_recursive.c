#include <stdio.h>

int feb(int n);

int main(){
	int result = feb(5);
	printf("Sum of first 5 numbers: %d\n", result);
	
	return 0;
}

int feb(int n){
	if (n == 1) return 1;
	int previousSum = feb(n - 1);
	int currentSum = previousSum + n;
	return currentSum;
}