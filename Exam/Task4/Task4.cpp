#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num_cats;
    cin >> num_cats;

    int group1_cats = 0;
    int group2_cats = 0;
    int group3_cats = 0;
    double total_food_grams = 0.0;

    for (int i = 0; i < num_cats; ++i) {
        double food_grams;
        cin >> food_grams;
        total_food_grams += food_grams;

        if (food_grams >= 100 && food_grams < 200) {
            group1_cats++;
        }
        else if (food_grams >= 200 && food_grams < 300) {
            group2_cats++;
        }
        else if (food_grams >= 300 && food_grams <= 400) {
            group3_cats++;
        }
    }

    double total_food_kg = total_food_grams / 1000.0;
    const double price_per_kg = 12.45;
    double total_price = total_food_kg * price_per_kg;

    cout << "Group 1: " << group1_cats << " cats." << endl;
    cout << "Group 2: " << group2_cats << " cats." << endl;
    cout << "Group 3: " << group3_cats << " cats." << endl;
    cout << "Price for food per day: " << fixed << setprecision(2) << total_price << " lv." << endl;

    return 0;
}