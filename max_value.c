#include <stdio.h>

int main()
{

	// Initialize an array
	int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 };

	// Find the size of the array
	int n = sizeof(arr) / sizeof(arr[0]);

	// Intialize the variable which will denote the maximum
	// element
	int res = arr[0];

	// Find the maximum value in the array and store it in
	// res

	for (int i = 0; i < n; i++) {
		if (res < arr[i])
			res = arr[i];
	}
	// print the elements of the array
	printf("Array Elements: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	// print the maximum value
	printf("The maximum value of the array is: %d", res);

	return 0;
}
