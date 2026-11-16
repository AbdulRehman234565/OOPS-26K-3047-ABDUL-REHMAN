#include <iostream>
using namespace std;
class Student {
private:
    string studentName;
    int rollNumber;
    string className;
    int mark1, mark2, mark3;

public:
    void setStudent(string name, int roll, string cls, int m1, int m2, int m3);
    void displayStudent();
    int getTotalMarks();
    int calculatePercentage(int totalPossibleMarks);
};
void Student::setStudent(string name, int roll, string cls, int m1, int m2, int m3) {
    studentName = name;
    rollNumber = roll;
    className = cls;
    mark1 = m1;
    mark2 = m2;
    mark3 = m3;
}

void Student::displayStudent() {
    cout << "Student Name : " << studentName << endl;
    cout << "Roll Number  : " << rollNumber << endl;
    cout << "Class Name   : " << className << endl;
    cout << "Marks        : " << mark1 << ", " << mark2 << ", " << mark3 << endl;
}

int Student::getTotalMarks() {
    return mark1 + mark2 + mark3;
}

int Student::calculatePercentage(int totalPossibleMarks) {
    return (getTotalMarks() * 100.0) / totalPossibleMarks;
}

int main() {
    Student s1, s2, s3;
    s1.setStudent("Abdul Rehman", 101, "10th Grade", 85, 90, 88);
    s2.setStudent("Ali", 102, "10th Grade", 92, 95, 91);
    s3.setStudent("Zain", 103, "10th Grade", 74, 68, 80);
    s1.displayStudent();
    s2.displayStudent();
    s3.displayStudent();
    cout << "\nStudent 1 Total Marks: " << s1.getTotalMarks() << endl;
    cout << "Student 2 Total Marks: " << s2.getTotalMarks() << endl;
    cout << "Student 3 Total Marks: " << s3.getTotalMarks() << endl;
    int maxMarks = 300;
    cout << "\nStudent 1 Percentage: " << s1.calculatePercentage(maxMarks) << "%" << endl;
    cout << "Student 2 Percentage: " << s2.calculatePercentage(maxMarks) << "%" << endl;
    cout << "Student 3 Percentage: " << s3.calculatePercentage(maxMarks) << "%" << endl;
    return 0;
}
