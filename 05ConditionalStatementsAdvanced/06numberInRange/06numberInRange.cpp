#include <iostream>

using namespace std;

int main()
{
    int numberIn;
    cin >> numberIn;

    if (numberIn >= -100 && numberIn != 0 && numberIn <= 100) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
