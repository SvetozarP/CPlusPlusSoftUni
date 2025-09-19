#include <iostream>
#include <string>

using namespace std;

int main()
{
    string typeMovie;
    int rowsCount;
    int columnCount;

    double ticketPrice = 0.0;
    double price;

    cin >> typeMovie >> rowsCount >> columnCount;

    if (typeMovie == "Premiere") {
        ticketPrice = 12.0;
    }
    else if (typeMovie == "Normal") {
        ticketPrice = 7.5;
    }
    else if (typeMovie == "Discount") {
        ticketPrice = 5.0;
    }

    price = rowsCount * columnCount * ticketPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << price << " leva" << endl;

    return 0;

}