#include <iostream>
using namespace std;

// Function prototype
int fibonacci(int n);

int main() {
    int n;
    cout << "How many Fibonacci numbers to display? ";
    cin >> n;

    cout << "Fibonacci sequence: " << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}