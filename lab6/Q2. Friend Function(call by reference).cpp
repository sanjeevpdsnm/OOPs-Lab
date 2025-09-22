#include <iostream>
using namespace std;

class Add {
private:
    int data;
public: 
    Add(int value) {
        data = value;
    }
    friend void displayData(Add& v);
    friend void displaySum(Add& v);
    friend Add sumData(Add &v1, Add &v2);
};

void displayData(Add &v) {
    cout << "Data : " << v.data << endl;
}
void displaySum(Add &v) {
    cout << "Sum : " << v.data << endl;
}
Add sumData(Add &v1,Add &v2) {
    Add ans(v1.data + v2.data);
    return ans;
}

int main() {
    Add v1(13);
    Add v2(19);
    displayData(v1);
    displayData(v2);
    Add ans = sumData(v1,v2);
    displaySum(ans);
    return 0;

}