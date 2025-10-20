#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int locations_count;
    cin >> locations_count;

    cout << fixed << setprecision(2);

    for (int i = 0; i < locations_count; ++i) {
        double expected_avg_gold;
        int days;
        cin >> expected_avg_gold;
        cin >> days;

        double total_gold_for_location = 0.0;
        for (int j = 0; j < days; ++j) {
            double gold_per_day;
            cin >> gold_per_day;
            total_gold_for_location += gold_per_day;
        }

        double actual_avg_gold = total_gold_for_location / days;

        if (actual_avg_gold >= expected_avg_gold) {
            cout << "Good job! Average gold per day: " << actual_avg_gold << "." << endl;
        }
        else {
            double needed_gold = expected_avg_gold - actual_avg_gold;
            cout << "You need " << needed_gold << " gold." << endl;
        }
    }

    return 0;
}