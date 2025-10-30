#include <iostream>
using namespace std;

int main () {
    int value = 90;

    if (value > 80) {
        cout << "Value is greater than 80." << endl;
    }
    else if (value == 90) {
        cout << "Value is equal to 90." << endl;
    }
    else if (value < 100) {
        cout << "Value is less than 100." << endl;
    }
    else {
        cout << "Value is not 90." << endl;
    }
    return 0;
}