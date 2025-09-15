#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex &c) const {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 4);   // 3 + 2i
    Complex c2(4, 9);   // 1 + 7i

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "\nAddition: "; sum.display();
    cout << "Subtraction: "; diff.display();
    cout << "Multiplication: "; prod.display();

    return 0;
}

