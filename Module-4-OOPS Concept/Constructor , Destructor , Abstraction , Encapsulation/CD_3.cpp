//3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setValues(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    void display() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car;
    car.setValues("Toyota", "Corolla", 2022);
    car.display();

    return 0;
}

