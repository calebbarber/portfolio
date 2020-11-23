#include <iostream>
using namespace std;

int fact(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    else return (n * fact(n-1));
}

int main() {
    cout << "Enter number: ";
    int n;
    cin >> n;
    cout << "Factorial of " << n << ": " << fact(n) << endl;
}
