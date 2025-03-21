//10.Write a program to concatenate the two strings using Operator Overloading.

#include <iostream>
#include <string>
using namespace std;

class Concatenate {
private:
    string str;

public:
    Concatenate(string s = "") {
        str = s;
    }

    void display() {
        cout << str << endl;
    }

    Concatenate operator+(const Concatenate& obj) {
        return Concatenate(str + obj.str);
    }
};

int main() {
    Concatenate s1("Hello "), s2("World!");
    Concatenate result = s1 + s2;

    cout << "String 1: ";
    s1.display();
    
    cout << "String 2: ";
    s2.display();
    
    cout << "Concatenated String: ";
    result.display();

    return 0;
}

