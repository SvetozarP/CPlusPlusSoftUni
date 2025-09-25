#include <iostream>
#include <string>
#include <iomanip> 
#include <cmath>   

using namespace std;

int main() {
    
    int tournamentsCount;
    int startingPoints;

    
    cin >> tournamentsCount;
    cin >> startingPoints;

    
    int pointsWonThisSeason = 0;
    int tournamentsWon = 0;

    
    for (int i = 0; i < tournamentsCount; i++) {
        string stage;
        cin >> stage;

        
        if (stage == "W") {
            pointsWonThisSeason = pointsWonThisSeason + 2000;
            tournamentsWon = tournamentsWon + 1;
        }
        else if (stage == "F") {
            pointsWonThisSeason = pointsWonThisSeason + 1200;
        }
        else if (stage == "SF") {
            pointsWonThisSeason = pointsWonThisSeason + 720;
        }
    }

    
    int finalPoints = startingPoints + pointsWonThisSeason;

    
    int averagePoints = pointsWonThisSeason / tournamentsCount;

    
    double winPercentage = ((double)tournamentsWon / tournamentsCount) * 100;

    
    cout << "Final points: " << finalPoints << endl;
    cout << "Average points: " << averagePoints << endl;

    
    cout << fixed << setprecision(2);
    cout << winPercentage << "%" << endl;

    return 0;
}