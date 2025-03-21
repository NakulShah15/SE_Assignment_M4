//6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor 

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void setSalary(double performanceFactor) {
        salary *= performanceFactor;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 101, 5000.0);
    emp.display();

    emp.setSalary(1.1);
    emp.display();

    return 0;
}

