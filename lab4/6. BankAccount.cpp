#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting to 0." << endl;
        }
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

    void showBalance() const {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(2000);  

    account1.showBalance();
    account1.deposit(1000);
    account1.showBalance();
    account1.withdraw(500);
    account1.showBalance();
    account1.withdraw(2000);
    account1.showBalance();
    return 0;
}

