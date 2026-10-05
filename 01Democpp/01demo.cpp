#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks > 100) {
        cout << "Invalid marks!" << endl;
    }

    else if (marks >= 80 && marks <= 100) {
        cout << "Grade: A+" << endl;
        cout << "GPA: 5.00" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: A" << endl;
        cout << "GPA: 4.00" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: A-" << endl;
        cout << "GPA: 3.50" << endl;
    }
    else if (marks >= 50) {
        cout << "Grade: B" << endl;
        cout << "GPA: 3.00" << endl;
    }
    else if (marks >= 40) {
        cout << "Grade: C" << endl;
        cout << "GPA: 2.00" << endl;
    }
    else if (marks >= 33) {
        cout << "Grade: D" << endl;
        cout << "GPA: 1.00" << endl;
    }
    else if (marks >= 0) {
        cout << "Grade: F" << endl;
        cout << "GPA: 0.00" << endl;
    }
    else {
        cout << "Invalid marks!" << endl;
    }

    return 0;
}