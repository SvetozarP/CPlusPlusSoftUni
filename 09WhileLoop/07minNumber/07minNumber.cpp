#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string userInput;
    int minNumber = INT_MAX;

    cin >> userInput;

    while (userInput != "Stop") {
        int number = stoi(userInput);
        if (number < minNumber) {
            minNumber = number;
        }

        cin >> userInput;
    }

    cout << minNumber << endl;
    return 0;
}
