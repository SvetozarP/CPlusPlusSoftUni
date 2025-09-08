#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputPassword;
    cin >> inputPassword;

    string passToGuess = "s3cr3t!P@ssw0rd";

    if (inputPassword == passToGuess) {
        cout << "Welcome" << endl;
    }
    else {
        cout << "Wrong password!";
    }
    return 0;
}