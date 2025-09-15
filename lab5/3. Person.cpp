#include <iostream>
using namespace std;

class Person {
private : 
    string name;
    int age;
    string country;
public : 
    void setName(string pName) {
        name = pName;
    }
    void setAge(int pAge) {
        age = pAge;
    }
    void setCountry(string PLCountry) {
        country = PLCountry;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getCountry() {
        return country;
    }
};

int main() {
    Person p;
    p.setName("Sanjeev");
    p.setAge(20);
    p.setCountry("India");
    cout << "Name = " << p.getName() << endl;
    cout << "Age = " << p.getAge() << endl;
    cout << "Country = " << p.getCountry() << endl;
    return 0;
}