#include <iostream>
#include <string>

using namespace std;

int main()
{
    string animalInput;
    cin >> animalInput;

    if (animalInput == "dog") {
        cout << "mammal" << endl;
    }
    else if ((animalInput == "crocodile") || (animalInput == "tortoise") || (animalInput == "snake")) {
        cout << "reptile" << endl;
    }
    else {
        cout << "unknown" << endl;
    }
    return 0;
}
