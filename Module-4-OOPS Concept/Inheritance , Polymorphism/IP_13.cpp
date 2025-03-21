//13. Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number(int n) : num(n) {}
    friend int findMax(const Number&, const Number&);
};

int findMax(const Number& n1, const Number& n2) {
    return (n1.num > n2.num) ? n1.num : n2.num;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Number num1(a), num2(b);
    cout << "The maximum number is: " << findMax(num1, num2) << endl;
    return 0;
}

