#include <iostream>
using namespace std;

int main() {
    int age;
    double income;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter annual income: ";
    cin >> income;

    if (age >= 18) {
        if (income >= 30000) {
            cout << "Congratulations! You are eligible for a loan.";
        } else {
            cout << "You meet the age requirement but income is below $30,000.";
        }
    } else {
        cout << "You are not eligible for a loan because you are under 18.";
    }

    return 0;
}
