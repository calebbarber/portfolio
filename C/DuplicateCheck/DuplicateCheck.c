#include <stdio.h>

int compare(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] == arr[j]) return 1;
		}
	}
	
	return 0;
}

int main() {
	int arr[3] = {6, 6, 6};
	
	printf("Array: [");
	for (int i = 0; i < 3; i++) {
		if (i == 2) printf("%d]\n", arr[i]);
		else printf("%d, ", arr[i]);
	}
	
	int n = compare(arr, 3);
	if (n) printf("Array contains duplicate items\n");
	else printf("Array does not contain duplicate items\n");
	
	return 0;
}

	