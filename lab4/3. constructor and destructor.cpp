#include <iostream>
using namespace std;

class Employee{
public:
    string name;
    int ID;

    Employee(string empName,int empID) {
        cout << "Constructor is called." << endl; 
        name = empName;
        ID = empID;
        cout << "Employee Name : " << name << " Employee ID : " << ID << " is created." << endl;
    }
    void display() {
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID : " << ID << endl;

    }
    ~Employee() {
        cout << "Destructor is called." << endl;
        cout << "Employee Name : " << name << " Employee ID : " << ID << " is destroyed." << endl;
    }
};

int main() {
    Employee emp("Sanjeev",12321);
    emp.display();

}