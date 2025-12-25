#include <iostream>
#include <string>

using namespace std;

int main() {
    char grade;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    int studentCount = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while (true) {
        cout << "Student [" << studentCount << "]: ";
        cin >> grade;

        if (grade == '0') {
            break; 
        }

        if (grade == 'A' || grade == 'a') {
            countA++;
            studentCount++;
        } else if (grade == 'B' || grade == 'b') {
            countB++;
            studentCount++;
        } else if (grade == 'C' || grade == 'c') {
            countC++;
            studentCount++;
        } else if (grade == 'D' || grade == 'd') {
            countD++;
            studentCount++;
        } else if (grade == 'F' || grade == 'f') {
            countF++;
            studentCount++;
        } else {
            cout << "Wrong input. Please input again." << endl;
        }
    }

    int totalStudents = studentCount - 1;
    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << countA << ", B = " << countB << ", C = " << countC 
         << ", D = " << countD << ", F = " << countF << endl;

    return 0;
}