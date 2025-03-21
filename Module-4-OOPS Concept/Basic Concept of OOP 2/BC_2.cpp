//2. Define a class to represent a bank account. Include the following members:

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\nNew Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\nNew Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("John Doe", 123456, 1000.0);

    acc.display();
    acc.deposit(500);
    acc.withdraw(300);
    acc.withdraw(1500);
}

