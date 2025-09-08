#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

int main() {
    int lengthCm;
    int widthCm;
    int heightCm;
    double percentageInput;
    double percentage;
    double volumeCm;
    double volumeLitres;
    double neededLitres;

    cin >> lengthCm;
    cin >> widthCm;
    cin >> heightCm;
    cin >> percentageInput;

    percentage = percentageInput / 100.0;

    volumeCm = lengthCm * widthCm * heightCm;
    volumeLitres = volumeCm / 1000.0;
    neededLitres = volumeLitres * (1 - percentage);

    // Print with full double precision - cout only holds 6 symbols by default.
    cout << setprecision(17) << neededLitres << endl;

    return 0;
}
