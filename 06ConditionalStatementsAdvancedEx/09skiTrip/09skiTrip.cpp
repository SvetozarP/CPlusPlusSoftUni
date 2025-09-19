#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int days;
    string roomType;
    string rating;

    cin >> days;
    cin.ignore();             
    getline(cin, roomType);   
    getline(cin, rating);     

    int nights = days - 1;
    if (nights < 0) nights = 0; 

    double pricePerNight = 0.0;
    if (roomType == "room for one person") {
        pricePerNight = 18.00;
    }
    else if (roomType == "apartment") {
        pricePerNight = 25.00;
    }
    else if (roomType == "president apartment") {
        pricePerNight = 35.00;
    }

    double totalPrice = pricePerNight * nights;

    if (roomType == "apartment") {
        if (nights < 10) {
            
            totalPrice *= 1.0 - 0.30;
        }
        else if (nights <= 15) {
            
            totalPrice *= 1.0 - 0.35;
        }
        else { 
            totalPrice *= 1.0 - 0.50; 
        }
    }
    else if (roomType == "president apartment") {
        if (nights < 10) {
            totalPrice *= 1.0 - 0.10; 
        }
        else if (nights <= 15) {
            totalPrice *= 1.0 - 0.15; 
        }
        else {
            totalPrice *= 1.0 - 0.20; 
        }
    }
 
    if (rating == "positive") {
        totalPrice *= 1.0 + 0.25;
    }
    else if (rating == "negative") {
        totalPrice *= 1.0 - 0.10;
    }

    cout << fixed << setprecision(2);
    cout << totalPrice << endl;

    return 0;
}
