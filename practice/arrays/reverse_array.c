#include <stdio.h>

#define ARR_SIZE 5

static void read_numbers(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		if (scanf("%d", &arr[i]) != 1) {
			printf("Invalid input.\n");
			return;
		}
	}
}

static void reverse_array(int *arr, int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
}

static void print_numbers(const int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d%s", arr[i], i == n - 1 ? "\n" : "\t");
	}
}

int main(void) {
	int arr[ARR_SIZE];
	read_numbers(arr, ARR_SIZE);
	reverse_array(arr, ARR_SIZE);
	printf("Reversed: ");
	print_numbers(arr, ARR_SIZE);
	return 0;
}
