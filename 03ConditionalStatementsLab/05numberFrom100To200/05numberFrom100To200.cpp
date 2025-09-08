#include <iostream>

using namespace std;

int main()
{
    int numberA;
    cin >> numberA;

    if (numberA < 100) {
        cout << "Less than 100" << endl;
    }
    else if ((100 <= numberA) && (numberA <= 200)) {
        cout << "Between 100 and 200" << endl;
    }
    else {
        cout << "Greater than 200" << endl;
    }
    return 0;
}
