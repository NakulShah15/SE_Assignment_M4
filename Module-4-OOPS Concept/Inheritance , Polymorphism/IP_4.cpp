//4. Write a C++ Program display Student Mark sheet using Multiple inheritance 

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

class Marks {
protected:
    double subject1, subject2, subject3, total, percentage;

public:
    void setMarks(double s1, double s2, double s3) {
        subject1 = s1;
        subject2 = s2;
        subject3 = s3;
        total = subject1 + subject2 + subject3;
        percentage = (total / 300) * 100;
    }

    void displayMarks() {
        cout << "Marks: " << subject1 << ", " << subject2 << ", " << subject3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Student : public Person, public Marks {
public:
    void displayMarkSheet() {
        displayPersonData();
        displayMarks();
    }
};

int main() {
    Student student;
    student.setPersonData("Alice", 18);
    student.setMarks(85, 90, 78);
    student.displayMarkSheet();

    return 0;
}

