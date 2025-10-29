#include <iostream>
using namespace std;

int main() {
    double num1 = 95, num2 = 97, num3 = 93;
    double average = num1 + num2 + num3/3;
    // double average = (num1 + num2 + num3)/3;

    cout<<"Average of: " <<num1 <<", " <<num2 <<", " <<num3;
    cout<<" = " <<average;

    return 0;
}
