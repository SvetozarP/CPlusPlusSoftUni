#include <iostream>

using namespace std;

int main()
{
    // Water resistance slows down 12.5s per 15m -> find how many 15m's in distance and floor
    // Need time for total distance and diff to WR

    // Inputs

    double wrSeconds, distanceMetres, secondsPerMetre;
    cin >> wrSeconds >> distanceMetres >> secondsPerMetre;

    // Water Resistance - no need to floor if we int the time - automatic floor.

    int times15m = distanceMetres / 15;
    double slowDownSeconds = times15m * 12.5;

    // Calc seconds for the distance

    double secondsTotalDistance = distanceMetres * secondsPerMetre;

    // Slowed down
    secondsTotalDistance += slowDownSeconds;

    // Format and output
    cout.setf(ios::fixed);
    cout.precision(2);

    if (wrSeconds > secondsTotalDistance) {
        cout << "Yes, he succeeded! The new world record is " << secondsTotalDistance << " seconds." << endl;
    }
    else {
        cout << "No, he failed! He was " << secondsTotalDistance - wrSeconds << " seconds slower." << endl;
    }

    return 0;
}
