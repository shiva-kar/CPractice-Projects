#include <stdio.h>

int main(){
	int a, b;
	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);
	if(a < b)
	printf("%d is smaller then %d.", a, b);
	else
	printf("%d is smaller then %d.", b, a);
	return 0;
}