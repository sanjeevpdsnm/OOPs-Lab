#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(string accNum, string name, double bal) {
        accountNumber = accNum;
        holderName = name;
        balance = bal;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }
     void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }
    void showAHName() {
        cout << "Holder Name: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
    void showBalance()  {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1("1233456786","Sanjeev Kumar Patel",1000);
    account1.showAHName();  
    account1.showBalance();
    account1.deposit(2000);
    account1.showBalance();
    account1.withdraw(500);
    account1.showBalance();
    account1.withdraw(2000);
    account1.showBalance();
    return 0;
}

