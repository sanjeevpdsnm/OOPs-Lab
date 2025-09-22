#include <iostream>
using namespace std;

class Negative {
private:
    int value;
public: 
    void setValue(int value) {
        this->value = value;
    }
    int getValue() {
        return value;
    }
    int operator --() {
        return --value;
    }
    void show() {
        cout << "Negative is : " << value << endl;
    }
};
int main() {
    Negative v1;
    v1.setValue(10);
    v1.getValue();
    --v1;
    v1.show();

}