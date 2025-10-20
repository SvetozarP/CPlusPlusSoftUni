#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    int planned_processors;
    int employees;
    int working_days;

    cin >> planned_processors;
    cin >> employees;
    cin >> working_days;

    int total_hours = employees * working_days * 8;


    int produced_processors = total_hours / 3;

    const double processor_price = 110.10;

    if (produced_processors >= planned_processors) {

        int extra_processors = produced_processors - planned_processors;
        double profit = extra_processors * processor_price;

        cout << "Profit: -> " << fixed << setprecision(2) << profit << " BGN" << endl;
    }
    else {

        int needed_processors = planned_processors - produced_processors;
        double loss = needed_processors * processor_price;

        cout << "Losses: -> " << fixed << setprecision(2) << loss << " BGN" << endl;
    }

    return 0;
}