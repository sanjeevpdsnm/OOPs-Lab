#include <iostream>
using namespace std;

class Car {
private : 
    string company;
    string model;
    int year;
public : 
    void setCompany(string CCompany) {
        company = CCompany;
    }
    void setModel(string CModel) {
        model = CModel;
    }
    void setYear(int CYear) {
        year = CYear;
    }
    string getCompany() {
        return company;
    }
    string getModel() {
        return model;
    }
    int getYear() {
        return year;
    }
    void display() {
        cout << "Company = " << getCompany() << endl;
        cout << "Model = " << getModel() << endl;
        cout << "Year = " << getYear() << endl;
    }
};

int main() {
    Car c;
    c.setCompany("BMW");
    c.setModel("X5");
    c.setYear(1999);
    c.display();
    return 0;
}