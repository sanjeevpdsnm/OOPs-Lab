#include <iostream>
using namespace std;

class Students {
public:
    string student_name;
    string Enrollment;
    double CGPA;
};

int main() {
    Students s1;
    s1.student_name = "Sanjeev Kumar Patel";
    s1.Enrollment = "2024BCSE022";
    s1.CGPA = 9.0;
    cout << "Student Name = " << s1.student_name<< endl;
    cout << "Enrollment = " << s1.Enrollment<< endl;
    cout << "CGPA = " << s1.CGPA<< endl;
    return 0;
}