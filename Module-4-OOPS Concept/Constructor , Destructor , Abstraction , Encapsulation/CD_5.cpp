//5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene. 

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    void setSides(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    string getType() {
        if (side1 == side2 && side2 == side3)
            return "Equilateral";
        else if (side1 == side2 || side2 == side3 || side1 == side3)
            return "Isosceles";
        else
            return "Scalene";
    }

    void display() {
        cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
        cout << "Triangle Type: " << getType() << endl;
    }
};

int main() {
    Triangle t;
    t.setSides(5, 5, 5);
    t.display();

    t.setSides(5, 5, 3);
    t.display();

    t.setSides(3, 4, 5);
    t.display();

    return 0;
}

