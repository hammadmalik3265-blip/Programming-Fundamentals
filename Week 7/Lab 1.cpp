#include <iostream>
using namespace std;

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int s1, s2, s3;
    cout << "Enter marks of Subject 1: ";
    cin >> s1;
    cout << "Enter marks of Subject 2: ";
    cin >> s2;
    cout << "Enter marks of Subject 3: ";
    cin >> s3;

    char g1 = getGrade(s1);
    char g2 = getGrade(s2);
    char g3 = getGrade(s3);

    if (g1 == 'F' || g2 == 'F' || g3 == 'F') {
        cout << "Failed";
        return 0;
    }

    int total = s1 + s2 + s3;
    float percentage = total / 3.0;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grades: " << g1 << ", " << g2 << ", " << g3 << endl;

    if (g1 == 'A' && g2 == 'A' && g3 == 'A' && total >= 270) {
        cout << "Eligible for Merit Scholarship";
    } else if (g1 >= 'B' && g2 >= 'B' && g3 >= 'B' && total >= 240) {
        cout << "Eligible for Regular Scholarship";
    } else {
        cout << "Not eligible for any scholarship";
    }

    return 0;
}
