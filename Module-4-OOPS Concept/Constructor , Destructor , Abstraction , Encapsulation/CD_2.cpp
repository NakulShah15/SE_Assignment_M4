//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
    }

    void display() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }
};

int main() {
    Calculator calc(10, 5);
    calc.display();

    return 0;
}

