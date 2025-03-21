/* 11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading Rectangle: 
Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area  */

#include <iostream>
using namespace std;

class AreaCalculator {
public:
    double area(double length, double breadth) {
        return length * breadth;
    }

    double area(double base, double height, int) {
        return 0.5 * base * height;
    }

    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    AreaCalculator calc;
    
    cout << "Rectangle Area: " << calc.area(5.0, 10.0) << endl;
    cout << "Triangle Area: " << calc.area(6.0, 8.0, 0) << endl;
    cout << "Circle Area: " << calc.area(7.0) << endl;

    return 0;
}

