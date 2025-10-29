#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int number;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name <<"!" << endl;
    cout << "Welcome to Circuits Workshop!" << endl;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Your input: " << number;
    
    return 0;
}