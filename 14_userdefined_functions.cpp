#include <iostream>
#include <string>
using namespace std;

// Function declarations
void greet(string);
void displayScores(double, double, double);
double getAverage(double, double, double);

int main() {
    string name;
    double score1, score2, score3;

    cout << "Enter your name: ";
    getline(cin, name);

    greet(name);

    cout << "Score 1: ";
    cin >> score1;
    cout << "Score 2: ";
    cin >> score2;
    cout << "Score 3: ";
    cin >> score3;

    displayScores(score1, score2, score3);

    return 0;
}

// Function definitions
void greet(string name) {
    cout << "Welcome, " << name << "!" << endl;
}

void displayScores(double sc1, double sc2, double sc3) {
    cout << "Average: " << getAverage(sc1, sc2, sc3) << endl;
}

double getAverage(double sc1, double sc2, double sc3) {
    return (sc1 + sc2 + sc3) / 3;
}