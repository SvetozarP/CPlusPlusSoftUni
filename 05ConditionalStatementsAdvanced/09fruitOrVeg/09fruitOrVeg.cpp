#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nameIn;
    cin >> nameIn;

    if (
        nameIn == "banana" ||
        nameIn == "apple" ||
        nameIn == "kiwi" ||
        nameIn == "cherry" ||
        nameIn == "lemon" ||
        nameIn == "grapes"
        ) {

        cout << "fruit" << endl;
    }
    else if (
        nameIn == "tomato" ||
        nameIn == "cucumber" ||
        nameIn == "pepper" ||
        nameIn == "carrot" 
        ) {

        cout << "vegetable" << endl;
    }
    else {
        cout << "unknown" << endl;
    }

    return 0;
}
