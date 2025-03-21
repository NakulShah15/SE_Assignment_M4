//12. Write a program to swap the two numbers using friend function without using third variable 

#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;

public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }

    friend void swapValues(SwapNumbers& obj);
};

void swapValues(SwapNumbers& obj) {
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main() {
    SwapNumbers obj(5, 10);
    
    cout << "Before Swapping: ";
    obj.display();

    swapValues(obj);

    cout << "After Swapping: ";
    obj.display();

    return 0;
}

