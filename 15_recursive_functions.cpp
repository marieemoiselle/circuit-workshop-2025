#include <iostream>
using namespace std;

void printNumbers(int);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Numbers from 1 to " << num << ": ";
    printNumbers(num);
    cout << endl;

    return 0;
}

void printNumbers(int n) {
    if (n == 0)  // base case
        return;
    printNumbers(n - 1);  // recursive case
    cout << n << " ";
}