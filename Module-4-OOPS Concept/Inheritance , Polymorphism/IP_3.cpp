/*3. Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    double percentage;

public:
    void setStudentData(double p) {
        percentage = p;
    }

    void displayStudentData() {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : virtual public Person {
protected:
    double salary;

public:
    void setTeacherData(double s) {
        salary = s;
    }

    void displayTeacherData() {
        cout << "Salary: $" << salary << endl;
    }
};

class SchoolMember : public Student, public Teacher {
public:
    void displayData() {
        displayPersonData();
        displayStudentData();
        displayTeacherData();
    }
};

int main() {
    SchoolMember member;
    member.setPersonData("John Doe", 30);
    member.setStudentData(85.5);
    member.setTeacherData(50000);
    member.displayData();

    return 0;
}

