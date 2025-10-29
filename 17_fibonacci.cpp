#include <iostream>
using namespace std;

int fibonacci (int);

int main () {
    int position;
    cout << "Enter a position number: ";
    cin >> position;

    int value = fibonacci(position);

    cout << "fibonacci(" << position << ") = " << value;
 
    return 0;
}

int fibonacci (int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}