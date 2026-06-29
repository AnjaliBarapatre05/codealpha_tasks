#include <iostream>
using namespace std;

int main() {
    int n, credit, totalCredits = 0;
    float grade, totalPoints = 0, cgpa;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalPoints += grade * credit;
        totalCredits += credit;
    }

    cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nCGPA = " << cgpa;

    return 0;
}