#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double changeInLeva;

    cin >> changeInLeva;

    int changeInStotinki = round(changeInLeva * 100);

    int coinCounter = 0;

    while (changeInStotinki >= 200) {
        changeInStotinki -= 200;
        coinCounter++;
    }

    while (changeInStotinki >= 100) {
        changeInStotinki -= 100;
        coinCounter++;
    }

    while (changeInStotinki >= 50) {
        changeInStotinki -= 50;
        coinCounter++;
    }

    while (changeInStotinki >= 20) {
        changeInStotinki -= 20;
        coinCounter++;
    }

    while (changeInStotinki >= 10) {
        changeInStotinki -= 10;
        coinCounter++;
    }

    while (changeInStotinki >= 5) {
        changeInStotinki -= 5;
        coinCounter++;
    }

    while (changeInStotinki >= 2) {
        changeInStotinki -= 2;
        coinCounter++;
    }

    while (changeInStotinki >= 1) {
        changeInStotinki -= 1;
        coinCounter++;
    }

    cout << coinCounter << std::endl;

    return 0;
}