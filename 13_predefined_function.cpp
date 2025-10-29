#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    cout << "Enter value for base: ";
    cin >> base;

    cout << "Enter value for exponent: ";
    cin >> exponent;

    int answer = pow(base, exponent);
    cout << base << " raised to " << exponent << " = " << answer << endl;

    return 0;
}