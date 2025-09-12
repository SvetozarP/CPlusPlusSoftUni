#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string seriesName;
    int episodeDuration, breakDuration;

    // Read input
    getline(cin, seriesName);
    cin >> episodeDuration;
    cin >> breakDuration;

    // Calculate time for lunch and rest
    double lunchTime = breakDuration / 8.0;  // 1/8 of break time
    double restTime = breakDuration / 4.0;   // 1/4 of break time

    // Calculate remaining free time
    double freeTime = breakDuration - lunchTime - restTime;

    // Check if there's enough time to watch the episode
    if (freeTime >= episodeDuration) {
        // Enough time - calculate remaining time after watching
        double remainingTime = freeTime - episodeDuration;
        int roundedRemainingTime = (int)ceil(remainingTime);

        cout << "You have enough time to watch " << seriesName
            << " and left with " << roundedRemainingTime
            << " minutes free time." << endl;
    }
    else {
        // Not enough time - calculate how much more time is needed
        double neededTime = episodeDuration - freeTime;
        int roundedNeededTime = (int)ceil(neededTime);

        cout << "You don't have enough time to watch " << seriesName
            << ", you need " << roundedNeededTime
            << " more minutes." << endl;
    }

    return 0;
}