#include <iostream>
#include <string>

using namespace std;

int main() {

    int width, length, height;
    cin >> width >> length >> height;

    int totalVolume = width * length * height;

    string inputLine;

    while (cin >> inputLine) {
        
        if (inputLine == "Done") {
            break;
        }
        
        int boxesCount = stoi(inputLine);

        totalVolume -= boxesCount;

        if (totalVolume < 0) {
            break;
        }
    }

    if (totalVolume >= 0) {
        cout << totalVolume << " Cubic meters left." << endl;
    }
    else {
        cout << "No more free space! You need " << -totalVolume << " Cubic meters more." << endl;
    }

    return 0;
}