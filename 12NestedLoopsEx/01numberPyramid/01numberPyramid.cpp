#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int current_number = 1;

    for (int row = 1; current_number <= n; row++) {
        for (int col = 0; col < row; col++) {
            if (current_number > n) {
                break;
            }
            cout << current_number << " ";
            current_number++;
        }
        cout << endl;
    }

    return 0;
}