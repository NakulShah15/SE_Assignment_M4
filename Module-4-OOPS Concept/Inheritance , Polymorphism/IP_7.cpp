//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent Constructor Called" << endl;
    }
};

class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent Constructor Called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor Called" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}

