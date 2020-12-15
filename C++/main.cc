#include <iostream>
using namespace std;

int prime(int);
int count(int*, int);

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(*arr);
	int res = count(arr, n);
	
	cout << "There are " << res << " prime numbers in the array: [";
	for (int i = 0; i < n; i++) {
		if (i == n-1) cout << arr[i] << "]\n";
		else cout << arr[i] << ", ";
	}
	
	return 0;
}
