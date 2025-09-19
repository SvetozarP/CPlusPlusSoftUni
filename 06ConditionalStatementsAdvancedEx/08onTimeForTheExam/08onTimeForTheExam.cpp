#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int examHour, examMinute;
    int arriveHour, arriveMinute;
    cin >> examHour >> examMinute;
    cin >> arriveHour >> arriveMinute;

    
    int examTime = examHour * 60 + examMinute;
    int arriveTime = arriveHour * 60 + arriveMinute;

    int diff = arriveTime - examTime; 

    
    if (diff > 0) {
        cout << "Late" << endl;
    }
    else if (diff >= -30) {
        cout << "On time" << endl;
    }
    else { 
        cout << "Early" << endl;
    }

    if (diff != 0) {
        int absDiff = (diff < 0) ? -diff : diff; 
        int hours = absDiff / 60;
        int minutes = absDiff % 60;

        if (diff < 0) { 
            if (hours == 0) {
                cout << minutes << " minutes before the start" << endl;
            }
            else {
                cout << hours << ":" << setw(2) << setfill('0') << minutes
                    << " hours before the start" << endl;
            }
        }
        else { 
            if (hours == 0) {
                cout << minutes << " minutes after the start" << endl;
            }
            else {
                cout << hours << ":" << setw(2) << setfill('0') << minutes
                    << " hours after the start" << endl;
            }
        }
    }

    return 0;
}
