#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName;
    getline(cin, playerName);

    int totalPoints = 301;
    int successfulShots = 0;
    int unsuccessfulShots = 0;

    string section;

    while (cin >> section)
    {
        if (section == "Retire")
        {
            cout << playerName << " retired after " << unsuccessfulShots << " unsuccessful shots." << endl;
            return 0; 
        }

        int throwPoints;
        cin >> throwPoints;

        int currentPoints = 0;
        if (section == "Single")
        {
            currentPoints = throwPoints;
        }
        else if (section == "Double")
        {
            currentPoints = throwPoints * 2;
        }
        else if (section == "Triple")
        {
            currentPoints = throwPoints * 3;
        }

        if (totalPoints - currentPoints >= 0)
        {
            totalPoints -= currentPoints;
            successfulShots++;
        }
        else
        {
            unsuccessfulShots++;
        }

        if (totalPoints == 0)
        {
            cout << playerName << " won the leg with " << successfulShots << " shots." << endl;
            break;
        }
    }

    return 0;
}