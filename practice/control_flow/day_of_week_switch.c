#include <stdio.h>

int main(void) {
	int day;
	printf("Enter the day (1-7): ");
	if (scanf("%d", &day) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	switch (day) {
		case 1: printf("Sunday\n"); break;
		case 2: printf("Monday\n"); break;
		case 3: printf("Tuesday\n"); break;
		case 4: printf("Wednesday\n"); break;
		case 5: printf("Thursday\n"); break;
		case 6: printf("Friday\n"); break;
		case 7: printf("Saturday\n"); break;
		default: printf("Invalid day. Please enter 1-7.\n"); break;
	}
	return 0;
}