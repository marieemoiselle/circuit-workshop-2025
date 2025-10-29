#include <iostream>
using namespace std;

int gcd (int, int);

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " & " << num2 << " is " << gcd(num1, num2) << endl;

    return 0;
}

// Function to compute GCD using recursion
int gcd(int a, int b) {
    if (b == 0)  // base case
        return a;
    else
        return gcd(b, a % b);  // recursive case
}
