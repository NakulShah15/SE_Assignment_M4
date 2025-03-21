//1. Write a program of to swap the two values using template 

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swapValues(x, y);
    cout << "After swapping: " << x << " " << y << endl;
    return 0;
}

