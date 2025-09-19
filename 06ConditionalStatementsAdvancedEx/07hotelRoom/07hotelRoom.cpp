#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string month;
    int nights;
    cin >> month >> nights;

    double studioPricePerNight = 0.0;
    double apartmentPricePerNight = 0.0;

    if (month == "May" || month == "October") {
        studioPricePerNight = 50.0;
        apartmentPricePerNight = 65.0;
    }
    else if (month == "June" || month == "September") {
        studioPricePerNight = 75.20;
        apartmentPricePerNight = 68.70;
    }
    else if (month == "July" || month == "August") {
        studioPricePerNight = 76.0;
        apartmentPricePerNight = 77.0;
    }

    
    double studioTotal = studioPricePerNight * nights;
    double apartmentTotal = apartmentPricePerNight * nights;

    
    if (month == "May" || month == "October") {
        if (nights > 14) {
            studioTotal *= 0.70; // 30% намаление
        }
        else if (nights > 7) {
            studioTotal *= 0.95; // 5% намаление
        }
    }
    else if (month == "June" || month == "September") {
        if (nights > 14) {
            studioTotal *= 0.80; // 20% намаление
        }
    }
    
    if (nights > 14) {
        apartmentTotal *= 0.90; // 10% намаление
    }
    cout << fixed << setprecision(2);
    cout << "Apartment: " << apartmentTotal << " lv." << endl;
    cout << "Studio: " << studioTotal << " lv." << endl;

    return 0;
}
