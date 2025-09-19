#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numberOne;
    int numberTwo;
    string operation;

    cin >> numberOne >> numberTwo >> operation;

    cout.setf(ios::fixed);
    cout.precision(2);

    string type = "none";


    if (operation == "+") {
        int result = numberOne + numberTwo;

        if (result % 2 == 0) {
            type = "even";
        }
        else {
            type = "odd";
        }
        cout << numberOne << " " << operation << " " << numberTwo << " = " << result << " - " << type << endl;
        return 0;
    }
    else if (operation == "-") {
        int result = numberOne - numberTwo;

        if (result % 2 == 0) {
            type = "even";
        }
        else {
            type = "odd";
        }
        cout << numberOne << " " << operation << " " << numberTwo << " = " << result << " - " << type << endl;
        return 0;
    }
    else if (operation == "*") {
        int result = numberOne * numberTwo;

        if (result % 2 == 0) {
            type = "even";
        }
        else {
            type = "odd";
        }
        cout << numberOne << " " << operation << " " << numberTwo << " = " << result << " - " << type << endl;
        return 0;
    }
    else if (operation == "%") {

        if (numberTwo == 0) {
            cout << "Cannot divide " << numberOne << " by zero" << endl;
            return 0;
        }

        int result = numberOne % numberTwo;
        cout << numberOne << " " << operation << " " << numberTwo << " = " << result << endl;
        return 0;
    }
    else if (operation == "/") {

        if (numberTwo == 0) {
            cout << "Cannot divide " << numberOne << " by zero" << endl;
            return 0;
        }
        
        double result = (double)numberOne / numberTwo;
        cout << numberOne << " " << operation << " " << numberTwo << " = " << result << endl;
        return 0;
    }

    return 0;
}
