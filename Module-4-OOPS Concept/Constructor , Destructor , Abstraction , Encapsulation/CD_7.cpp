//7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid. 

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    bool isValidDate(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || y < 1)
            return false;

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)))
            daysInMonth[2] = 29;

        return d <= daysInMonth[m];
    }

public:
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date" << endl;
        }
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    date.setDate(29, 2, 2024);
    date.display();

    date.setDate(31, 4, 2023);
    date.display();

    return 0;
}

