#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert letter grade to grade points
float gradeToPoint(char grade) {
    switch (toupper(grade)) {
        case 'A': return 10.0;  
        case 'B': return 8.0;
        case 'C': return 6.0;
        case 'D': return 4.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float totalCredits = 0, totalGradePoints = 0;
    char grade;
    float credit;

    cout << "\nEnter details for each course:\n";

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        float gradePoint = gradeToPoint(grade);
        totalGradePoints += gradePoint * credit;
        totalCredits += credit;

        cout << "Grade Point: " << gradePoint << endl;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n------------------------------------";
    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nFinal CGPA: " << cgpa;
    cout << "\n------------------------------------\n";

    return 0;
}
