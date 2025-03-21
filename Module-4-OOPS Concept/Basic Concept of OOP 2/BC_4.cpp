//4. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference. 

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14159 * radius;
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Circumference: " << getCircumference() << endl;
    }
};

int main() {
    Circle c;
    c.setRadius(5.0);
    c.display();

    return 0;
}


