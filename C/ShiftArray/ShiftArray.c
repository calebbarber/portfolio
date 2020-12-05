#include <stdio.h>

void shift(int* arr, int n, int x) {
	printf("Shifting...\n");
	int temp[n];
	
	int j;
	for (int i = (n-x); i < n; i++) {
		temp[j] = arr[i];
		j++;
	}
	
	for (int i = 0; j < n; i++) {
		temp[j] = arr[i];
		j++;
	}
	
	for (int i = 0; i < n; i++) arr[i] = temp[i];
}

int main() {
	int arr[5] = {6, 9, 4, 2, 0};
	int x;
	
	printf("[");
	for (int i = 0; i < 5; i++) {
		if (i == 5-1) printf("%d]\n", arr[i]);
		else printf("%d, ", arr[i]);
	}
	
	printf("Enter array shift: ");
	scanf("%d", &x);
	
	shift(arr, 5, x);
	
	printf("Shifted array: [");\
	for (int i = 0; i < 5; i++) {
		if (i == 5-1) printf("%d]\n", arr[i]);
		else printf("%d, ", arr[i]);
	}
	
	return 0;
}
