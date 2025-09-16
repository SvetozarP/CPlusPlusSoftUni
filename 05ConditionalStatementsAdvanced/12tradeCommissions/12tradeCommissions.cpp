#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    
    std::string city;
    double sales;
    std::cin >> city >> sales;

    
    double commission_rate = -1.0;

   
    if (city == "Sofia") {
        
        if (sales >= 0 && sales <= 500) {
            commission_rate = 0.05; // 5%
        }
        else if (sales > 500 && sales <= 1000) {
            commission_rate = 0.07; // 7%
        }
        else if (sales > 1000 && sales <= 10000) {
            commission_rate = 0.08; // 8%
        }
        else if (sales > 10000) {
            commission_rate = 0.12; // 12%
        }
    }
    else if (city == "Varna") {
        if (sales >= 0 && sales <= 500) {
            commission_rate = 0.045; // 4.5%
        }
        else if (sales > 500 && sales <= 1000) {
            commission_rate = 0.075; // 7.5%
        }
        else if (sales > 1000 && sales <= 10000) {
            commission_rate = 0.10; // 10%
        }
        else if (sales > 10000) {
            commission_rate = 0.13; // 13%
        }
    }
    else if (city == "Plovdiv") {
        if (sales >= 0 && sales <= 500) {
            commission_rate = 0.055; // 5.5%
        }
        else if (sales > 500 && sales <= 1000) {
            commission_rate = 0.08; // 8%
        }
        else if (sales > 1000 && sales <= 10000) {
            commission_rate = 0.12; // 12%
        }
        else if (sales > 10000) {
            commission_rate = 0.145; // 14.5%
        }
    }

  
    if (commission_rate >= 0) {
        
        double total_commission = sales * commission_rate;

        
        cout << fixed << setprecision(2) << total_commission << endl;
    }
    else {
        
        cout << "error" << endl;
    }

    return 0;
}