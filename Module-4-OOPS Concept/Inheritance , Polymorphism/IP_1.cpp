//1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matches;

    void inputData(string n, int m) {
        name = n;
        matches = m;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns, bestPerformance;
    double averageRuns;

public:
    void inputBatsmanData(int runs, int best) {
        totalRuns = runs;
        bestPerformance = best;
        calculateAverage();
    }

    void calculateAverage() {
        if (matches != 0)
            averageRuns = (double)totalRuns / matches;
        else
            averageRuns = 0;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Matches: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() {
    Batsman player;
    player.inputData("Virat Kohli", 250);
    player.inputBatsmanData(12000, 183);
    player.displayData();

    return 0;
}

