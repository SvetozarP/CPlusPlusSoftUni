#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string userInput;
    int maxNumber = INT_MIN;

    cin >> userInput;

    while (userInput != "Stop") {
        int number = stoi(userInput);
        if (number > maxNumber) {
            maxNumber = number;
        }

        cin >> userInput;
    }

    cout << maxNumber << endl;
    return 0;
}
