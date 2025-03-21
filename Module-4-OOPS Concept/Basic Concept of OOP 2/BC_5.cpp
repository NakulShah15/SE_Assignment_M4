//5. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter. 

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle r;
    r.setDimensions(5.0, 3.0);
    r.display();

    return 0;
}

