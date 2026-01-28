#include <iostream>
using namespace std;
int main()
{
    int choice;
    float usd, result;
    cout<<"Enter amount in USD: ";
    cin>>usd;
    cout<<"Convert USD to:\n";
    cout<<"1. PKR\n2. INR\n3. EURO\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice) {
        case 1:
            result = usd * 280;                       // USD to PKR
            cout<<"Amount in PKR = "<<result;
            break;

        case 2:
            result = usd * 83;                // USD to INR
            cout<<"Amount in INR = "<<result;
            break;

        case 3:
            result = usd * 0.92;                   // USD to EURO
            cout<<"Amount in EURO = "<<result;
            break;

        default:
            cout<<"Invalid choice!";
    }

    return 0;
}

