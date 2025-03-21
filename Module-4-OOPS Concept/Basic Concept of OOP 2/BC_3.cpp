//3. Data Member: Topics Covered Basic Concepts of OOP Topics Covered Basic Concepts of OOP -Name of the depositor -Account Number -Type of Account -Balance amount in the account Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance 


#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(string name, int accNum, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
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
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.assignValues("John Doe", 123456, "Savings", 5000.0);
    
    acc.display();
    acc.deposit(2000);
    acc.withdraw(1000);
    acc.withdraw(7000);

    return 0;
}

