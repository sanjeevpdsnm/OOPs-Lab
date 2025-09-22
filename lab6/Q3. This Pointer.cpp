#include <iostream>
using namespace std;

class Val {
private:
    int data;
    static int count;
public: 
    Val(int value) {
        this->data = value; 
    }
    Val(Val& v) {
        this->data = v.data;
    }
    void showData() {
        cout << "Data : " << this->data << endl;
    }
    Val& changeVAlue(int value) {
        this->data = value;
        return *this;
    }
    Val() {
        count++;
    }
    static int getcount() {
        return count;
    }
};
int Val:: count = 0;
int main() {
    Val v1(10);
    Val v2(20);
    cout << "Using this pointer." << endl;
    v1.showData();
    cout << "Using copy constructor" << endl;
    v1.changeVAlue(20);
    v1.showData();
    cout << "Static member function" << endl;
    Val();
    cout << "Count : " << Val:: getcount() << endl;
    return 0;
}