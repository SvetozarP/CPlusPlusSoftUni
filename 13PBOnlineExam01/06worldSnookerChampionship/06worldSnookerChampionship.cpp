#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string stage, ticketType;
    int ticketCount;
    char photoWithTrophy;

    getline(cin, stage);
    getline(cin, ticketType);
    cin >> ticketCount >> photoWithTrophy;

    double ticketPrice = 0.0;

    if (stage == "Quarter final") {
        if (ticketType == "Standard") {
            ticketPrice = 55.50;
        }
        else if (ticketType == "Premium") {
            ticketPrice = 105.20;
        }
        else if (ticketType == "VIP") {
            ticketPrice = 118.90;
        }
    }
    else if (stage == "Semi final") {
        if (ticketType == "Standard") {
            ticketPrice = 75.88;
        }
        else if (ticketType == "Premium") {
            ticketPrice = 125.22;
        }
        else if (ticketType == "VIP") {
            ticketPrice = 300.40;
        }
    }
    else if (stage == "Final") {
        if (ticketType == "Standard") {
            ticketPrice = 110.10;
        }
        else if (ticketType == "Premium") {
            ticketPrice = 160.66;
        }
        else if (ticketType == "VIP") {
            ticketPrice = 400.00;
        }
    }

    double totalPrice = ticketCount * ticketPrice;
    bool freePhotos = false;

    if (totalPrice > 4000) {
        totalPrice *= 0.75;
        freePhotos = true;
    }
    else if (totalPrice > 2500) {
        totalPrice *= 0.90;
    }

    if (photoWithTrophy == 'Y' && !freePhotos) {
        totalPrice += ticketCount * 40.0;
    }

    cout << fixed << setprecision(2) << totalPrice << endl;

    return 0;
}