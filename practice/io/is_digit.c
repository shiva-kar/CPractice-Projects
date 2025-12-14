#include <stdio.h>

int main(void) {
	char ch;
	printf("Enter a character: ");
	if (scanf(" %c", &ch) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	if (ch >= '0' && ch <= '9') {
		printf("It is a digit.\n");
	} else {
		printf("It is not a digit.\n");
	}
	return 0;
}
