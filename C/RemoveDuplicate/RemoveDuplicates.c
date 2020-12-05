#include <stdio.h>

int removeDuplicates(int* arr, int n) {
	if (n == 0 || n == 1) return n;
	
	int temp[n];
	
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[i+1]) {
			temp[j] = arr[i];
			j++;
		}
	}
	
	for (int i = 0; i < j; i++) arr[i] = temp[i];
	
	return j;
}

int main() {
	int arr[13] = {1, 1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 9, 9};
	
	printf("Original Array: [");
	for (int i = 0; i < 13; i++) {
		if (i == 12) printf("%d]", arr[i]);
		else printf("%d, ", arr[i]);
	}
	printf("\n");
	
	int n = removeDuplicates(arr, 13);
	
	printf("Modified Array: [");
	for (int i = 0; i < n; i++) {
		if (i == n-1) printf("%d]", arr[i]);
		else printf("%d, ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
