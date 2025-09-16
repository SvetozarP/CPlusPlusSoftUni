#include <iostream>

using namespace std;

int main()
{
    int numberIn;
    cin >> numberIn;

    if (!((numberIn >= 100 && numberIn <= 200) || numberIn == 0)) {
        cout << "invalid" << endl;
    }

    return 0;
}
