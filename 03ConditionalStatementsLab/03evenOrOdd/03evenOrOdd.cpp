#include <iostream>

using namespace std;

int main()
{
    int numberA;
    cin >> numberA;

    if (numberA % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
    return 0;
}
