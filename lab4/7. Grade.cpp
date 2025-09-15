#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string rollNo;
    double marks;

public:
    Student(string n, string r, double m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name;
    string roll;
    double marks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    getline(cin,roll);
    cout << "Enter Marks: ";
    cin >> marks;

    Student s1(name, roll, marks);
    cout << "\n--- Student Details ---\n";
    s1.display();

    return 0;
}


