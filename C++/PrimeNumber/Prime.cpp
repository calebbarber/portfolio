#include <iostream>
using namespace std;

int prime(int n) {
    int res = 0;
    int m = n/2;

    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            res = 1;
            break;
        }
    }

    return res;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (prime(n)) cout << n << " is not a prime number\n";
    else cout << n << " is a prime number\n";
}
