#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int yearlevel;
    
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your year level: ";
    cin >> yearlevel;
    cout << "Your name is: " << name << endl;
    cout << "Grade Level: " << yearlevel;
    
    return 0;
}
