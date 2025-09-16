#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput;
    cin >> userInput;

    if ((userInput == "Saturday") || (userInput == "Sunday")) {
        cout << "Weekend" << endl;
    }
    else if ((userInput == "Monday") ||
        (userInput == "Tuesday") ||
        (userInput == "Wednesday") ||
        (userInput == "Thursday") ||
        (userInput == "Friday")) {

        cout << "Working day" << endl;
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
