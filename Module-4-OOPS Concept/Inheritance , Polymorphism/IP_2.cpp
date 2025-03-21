//2. Write a C++ Program to find Area of Rectangle using inheritance 

#include <iostream>
using namespace std;

class Shape {
protected:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape {
public:
    double getArea() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    rect.display();

    return 0;
}

