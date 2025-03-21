//1. Write a program to find the multiplication values and the cubic values using inline function 

#include <iostream>
using namespace std;

class Calculator {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline int cube(int a) {
        return a * a * a;
    }
};

int main() {
    Calculator calc;
    int num1 = 3, num2 = 4;

    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Cube: " << calc.cube(num1) << endl;

    return 0;
}

