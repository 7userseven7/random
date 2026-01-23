#include <stdio.h>
#include <stdlib.h>
int main() {
	size_t input;
	int holder = 0;
	scanf_s("%d", &input);
	int* arr = malloc(sizeof(int) * input);
	if (arr == NULL) {
		return 1;
	}
	for (int i = 0; i < input; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = input - 1; i > 0; i--) {
		holder = arr[i] * arr[i - 1];
	}
	printf("%d", holder);
	free(arr);
	arr = NULL;
	return 0;
}
