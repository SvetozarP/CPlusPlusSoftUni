#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string country, apparatus;
    cin >> country >> apparatus;

    double difficulty = 0.0;
    double execution = 0.0;

    if (country == "Russia") {
        if (apparatus == "ribbon") {
            difficulty = 9.100;
            execution = 9.400;
        }
        else if (apparatus == "hoop") {
            difficulty = 9.300;
            execution = 9.800;
        }
        else if (apparatus == "rope") {
            difficulty = 9.600;
            execution = 9.000;
        }
    }
    else if (country == "Bulgaria") {
        if (apparatus == "ribbon") {
            difficulty = 9.600;
            execution = 9.400;
        }
        else if (apparatus == "hoop") {
            difficulty = 9.550;
            execution = 9.750;
        }
        else if (apparatus == "rope") {
            difficulty = 9.500;
            execution = 9.400;
        }
    }
    else if (country == "Italy") {
        if (apparatus == "ribbon") {
            difficulty = 9.200;
            execution = 9.500;
        }
        else if (apparatus == "hoop") {
            difficulty = 9.450;
            execution = 9.350;
        }
        else if (apparatus == "rope") {
            difficulty = 9.700;
            execution = 9.150;
        }
    }

    double totalScore = difficulty + execution;
    double maxScore = 20.0;
    double percentageNeeded = ((maxScore - totalScore) / maxScore) * 100;

    cout << fixed << setprecision(3);
    cout << "The team of " << country << " get " << totalScore << " on " << apparatus << "." << endl;

    cout << fixed << setprecision(2);
    cout << percentageNeeded << "%" << endl;

    return 0;
}