//6. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setValues(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person p;
    p.setValues("John Doe", 25, "USA");
    p.display();

    return 0;
}

