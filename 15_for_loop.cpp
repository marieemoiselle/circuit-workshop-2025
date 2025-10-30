#include <iostream>
using namespace std;

int main() {
    for (int ctr = 2; ctr <= 10; ctr+=2) {
        if (ctr == 4) {
            continue;
        }
        cout << ctr << endl;
    }
    return 0;
}