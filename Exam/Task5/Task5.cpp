#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int kids_count = 0;
    int adults_count = 0;

    const int toy_price = 5;
    const int sweater_price = 15;

    while (cin >> input && input != "Christmas") {
        int age = stoi(input);

        if (age <= 16) {
            kids_count++;
        }
        else {
            adults_count++;
        }
    }

    int money_for_toys = kids_count * toy_price;
    int money_for_sweaters = adults_count * sweater_price;

    cout << "Number of adults: " << adults_count << endl;
    cout << "Number of kids: " << kids_count << endl;
    cout << "Money for toys: " << money_for_toys << endl;
    cout << "Money for sweaters: " << money_for_sweaters << endl;

    return 0;
}