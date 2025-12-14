#include <stdio.h>

static void write_numbers(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		if (scanf("%d", &arr[i]) != 1) {
			printf("Invalid input.\n");
			return;
		}
	}
}

static void print_numbers(const int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d%s", arr[i], i == n - 1 ? "\n" : "\t");
	}
}

int main(void) {
	int arr[10];
	int size = (int)(sizeof arr / sizeof arr[0]);
	write_numbers(arr, size);
	printf("You entered: ");
	print_numbers(arr, size);
	return 0;
}