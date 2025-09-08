#include <iostream>

using namespace std;

int main()
{
    double speedInput;
    cin >> speedInput;

    if (speedInput <= 10) {
        cout << "slow" << endl;
    }
    else if ((speedInput > 10) && (speedInput <= 50)) {
        cout << "average" << endl;
    }
    else if ((speedInput > 50) && (speedInput <= 150)) {
        cout << "fast" << endl;
    }
    else if ((speedInput > 150) && (speedInput <= 1000)) {
        cout << "ultra fast" << endl;
    }
    else if (speedInput > 1000) {
        cout << "extremely fast" << endl;
    }
    
    return 0;
}
