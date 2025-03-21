//9. Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[5];

public:
    void setData(int a[]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = a[i];
        }
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix& m) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2, result;
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {6, 7, 8, 9, 10};

    m1.setData(a1);
    m2.setData(a2);

    result = m1 + m2;

    cout << "Matrix 1: ";
    m1.display();

    cout << "Matrix 2: ";
    m2.display();

    cout << "Resultant Matrix: ";
    result.display();

    return 0;
}

