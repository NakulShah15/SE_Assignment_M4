//8. Write a C++ program to implement a class called Student that Topics Covered Constructor Destructor Encapsulation Abstraction has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
using namespace std;

class Address {
public:
    string street, city, state;
    int zipCode;

    Address(string s, string c, string st, int z) {
        street = s;
        city = c;
        state = st;
        zipCode = z;
    }

    void display() {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name, studentClass;
    int rollNumber;
    double marks;
    Address* address;

    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

public:
    Student(string n, string c, int r, double m, Address* addr) : address(addr) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address->display();
    }
};

int main() {
    Address addr("123 Main St", "New York", "NY", 10001);
    Student student("John Doe", "10th", 101, 85.5, &addr);
    student.display();

    return 0;
} 

