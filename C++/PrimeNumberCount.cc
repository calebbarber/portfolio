#include <iostream>
using namespace std;

int prime(int n) {
    int m = n/2;

    for (int i = 2; i <= m; i++) 
        if (n % i == 0) return 0;
    
	return 1;
}

int count(int* arr, int n) {
	int count = 0;
	
	for (int i = 0; i < n; i++) {
		int flag = prime(arr[i]);
		if (flag) count++;
	}
	
	return count;
}
