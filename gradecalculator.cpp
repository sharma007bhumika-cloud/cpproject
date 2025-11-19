
#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "===== Grade Calculator =====\n";

    // Input marks
    cout << "Enter marks of 5 subjects (out of 100):\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Calculate
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    cout << "\nTotal Marks = " << total << "/500\n";
    cout << "Percentage  = " << percentage << "%\n";

    // Grade calculation
    cout << "Grade: ";
    if (percentage >= 90)
        cout << "A+\n";
    else if (percentage >= 80)
        cout << "A\n";
    else if (percentage >= 70)
        cout << "B\n";
    else if (percentage >= 60)
        cout << "C\n";
    else if (percentage >= 50)
        cout << "D\n";
    else
        cout << "F (Fail)\n";

    return 0;
}
