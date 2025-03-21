/*8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different 
parameters and Function Overloading . */

#include <iostream>
using namespace std;

class MathOperations {
public:
    int operate(int a, int b) {
        return a + b;
    }

    double operate(double a, double b) {
        return a - b;
    }

    int operate(int a, int b, int c) {
        return a * b * c;
    }

    double operate(double a, double b, char op) {
        if (op == '/')
            return a / b;
        return 0;
    }
};

int main() {
    MathOperations math;
    cout << "Addition: " << math.operate(5, 3) << endl;
    cout << "Subtraction: " << math.operate(10.5, 4.2) << endl;
    cout << "Multiplication: " << math.operate(2, 3, 4) << endl;
    cout << "Division: " << math.operate(20.0, 4.0, '/') << endl;
    return 0;
}

