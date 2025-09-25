#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    int groupsCount;
    cin >> groupsCount;

    
    int climbersMusala = 0;
    int climbersMontBlanc = 0;
    int climbersKilimanjaro = 0;
    int climbersK2 = 0;
    int climbersEverest = 0;

    
    int totalClimbers = 0;

    
    for (int i = 0; i < groupsCount; i++) {
        int peopleInGroup;
        cin >> peopleInGroup;

        
        totalClimbers = totalClimbers + peopleInGroup;

        
        if (peopleInGroup <= 5) {
            climbersMusala = climbersMusala + peopleInGroup;
        }
        else if (peopleInGroup >= 6 && peopleInGroup <= 12) {
            climbersMontBlanc = climbersMontBlanc + peopleInGroup;
        }
        else if (peopleInGroup >= 13 && peopleInGroup <= 25) {
            climbersKilimanjaro = climbersKilimanjaro + peopleInGroup;
        }
        else if (peopleInGroup >= 26 && peopleInGroup <= 40) {
            climbersK2 = climbersK2 + peopleInGroup;
        }
        else { 
            climbersEverest = climbersEverest + peopleInGroup;
        }
    }

    
    cout << fixed << setprecision(2);

    cout << (double)climbersMusala / totalClimbers * 100 << "%" << std::endl;
    cout << (double)climbersMontBlanc / totalClimbers * 100 << "%" << std::endl;
    cout << (double)climbersKilimanjaro / totalClimbers * 100 << "%" << std::endl;
    cout << (double)climbersK2 / totalClimbers * 100 << "%" << std::endl;
    cout << (double)climbersEverest / totalClimbers * 100 << "%" << std::endl;

    return 0;
}