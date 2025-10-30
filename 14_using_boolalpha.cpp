# include <iostream>
using namespace std;

int main() {
    bool testExpr = !(!(!(!(!(!(!(true && false)))))));
    cout << boolalpha << testExpr << endl;
    return 0;
}