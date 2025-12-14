#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count;
	printf("Number of items: ");
	if (scanf("%d", &count) != 1 || count <= 0) {
		printf("Please enter a positive integer.\n");
		return 1;
	}

	float *prices = (float *)malloc((size_t)count * sizeof(float));
	if (!prices) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < count; i++) {
		printf("Enter price for item %d: ", i + 1);
		if (scanf("%f", &prices[i]) != 1) {
			printf("Invalid price.\n");
			free(prices);
			return 1;
		}
	}

	const float tax = 0.18f;
	printf("Total prices with tax (18%%):\n");
	for (int i = 0; i < count; i++) {
		float total = prices[i] * (1.0f + tax);
		printf("Item %d: %.2f\n", i + 1, total);
	}

	free(prices);
	return 0;
}