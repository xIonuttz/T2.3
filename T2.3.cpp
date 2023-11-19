#include <iostream>
#include <string>
using namespace std;
// Define the struct Student
struct Student {
    string name;
    int id;
    double grade;
};

// Overloaded Max function for integers
int Max(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded Max function for doubles
double Max(double a, double b) {
    return (a > b) ? a : b;
}

// Overloaded Max function for struct Student
Student Max(const Student& s1, const Student& s2) {
    return (s1.grade > s2.grade) ? s1 : s2;
}

int main() {
    // Example usage with integers
    int num1 = 5, num2 = 10;
    cout << "Max of " << num1 << " and " << num2 << ": " << Max(num1, num2) << endl;

    // Example usage with doubles
    double dbl1 = 3.14, dbl2 = 2.71;
    cout << "Max of " << dbl1 << " and " << dbl2 << ": " << Max(dbl1, dbl2) << endl;

    // Example usage with struct Student
    Student student1 = { "Ionut", 1, 85.5 };
    Student student2 = { "Maria", 2, 92.0 };

    Student maxStudent = Max(student1, student2);

    cout << "Student with the maximum grade: " << maxStudent.name << " (ID: " << maxStudent.id
        << ") - Grade: " << maxStudent.grade << endl;

    return 0;
}
