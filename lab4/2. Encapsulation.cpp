#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;
public:
    void setName(string empName) {
        name = empName;
    }

    string getName() {
        return name;
    }

    void setSalary(double empSalary) {
        if (empSalary >= 0)
            salary = empSalary;
        else
            cout << "Invalid salary amount!" << endl;
    }

    int getSalary() {
        return salary;
    }
 
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << " Cr"<< endl;
    }
};

int main() {
    Employee emp1,emp2;

    emp1.setName("Sanjeev");
    emp1.setSalary(200.00);
    emp1.display();  
    return 0;
}