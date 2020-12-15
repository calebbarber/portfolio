#include <iostream>
#include <algorithm>
using namespace std;

void merge(int* arr1, int n1, int* arr2, int n2) {
	int n = n1+n2;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		if (i < n1) arr[i] = arr1[i];
		else arr[i] = arr2[i-n1];
	}
	
	sort(arr, arr+n);
	cout << "Merged Array: [";
	for (int i = 0; i < n; i++) {
		if (i == n-1) cout << *(arr+i) << "]\n";
		else cout << *(arr+i) << ", ";
	}
}

int main() {
	int arr1[2] = {1, 5};
	cout << "Array 1: [";
	for (int i = 0; i < 2; i++) {
		if (i == 1) cout << arr1[i] << "]\n";
		else cout << arr1[i] << ", ";
	}
	
	int arr2[3] = {5, 0, 1};
	cout << "Array 2: [";
	for (int i = 0; i < 3; i++) {
		if (i == 2) cout << arr2[i] << "]\n";
		else cout << arr2[i] << ", ";
	}
	
	int n1 = sizeof(arr1)/sizeof(*arr1);
	int n2 = sizeof(arr2)/sizeof(*arr2);
	
	merge(arr1, n1, arr2, n2);
	
	return 0;
}
