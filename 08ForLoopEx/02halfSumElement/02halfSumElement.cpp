#include <iostream>
#include <climits>

using namespace std;

int main() {

    int n;
    cin >> n;

    int* numbers = new int[n];

    int sum = 0;
    int max_element = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum = sum + numbers[i];

        if (numbers[i] > max_element) {
            max_element = numbers[i];
        }
    }

    bool found = false;
    int element_equal_to_sum = 0;

    for (int i = 0; i < n; i++) {

        int sum_of_others = sum - numbers[i];

        if (numbers[i] == sum_of_others) {
            found = true;
            element_equal_to_sum = numbers[i];
            break;
        }
    }

    if (found) {
        cout << "Yes" << endl;
        cout << "Sum = " << element_equal_to_sum << endl;
    }
    else {
        
        int sum_without_max = sum - max_element;
        int diff = max_element - sum_without_max;

        if (diff < 0) {
            diff = -diff;
        }

        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    delete[] numbers;

    return 0;
}