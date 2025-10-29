#include <iostream>
using namespace std;

int main() {
    int score = 88;

    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    }
    else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    }
    else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    }
    else {
        cout << "Failed." << endl;
    }

    return 0;
}