#include <iostream>
#include <string>

using namespace std;

int main()
{
    double ageInput;
    string genderInput;

    cin >> ageInput >> genderInput;

    if (genderInput == "m") {
        if (ageInput >= 16) {
            cout << "Mr." << endl;
        }
        else {
            cout << "Master" << endl;
        }
    }
    else if (genderInput == "f") {
        if (ageInput >= 16) {
            cout << "Ms." << endl;
        }
        else {
            cout << "Miss" << endl;
        }
    }
    return 0;
}
