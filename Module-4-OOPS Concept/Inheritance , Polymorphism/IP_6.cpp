//6. Write a C++ Program to show access to Private Public and Protected using Inheritance 

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 10;

protected:
    int protectedVar = 20;

public:
    int publicVar = 30;

    int getPrivateVar() {
        return privateVar;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Accessing public variable: " << publicVar << endl;
        cout << "Accessing protected variable: " << protectedVar << endl;
        cout << "Accessing private variable using getter: " << getPrivateVar() << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    cout << "Directly accessing public variable: " << obj.publicVar << endl;

    return 0;
}

