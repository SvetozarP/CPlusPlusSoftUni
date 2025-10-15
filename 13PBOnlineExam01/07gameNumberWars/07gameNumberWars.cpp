#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string player1, player2;
	int score1 = 0, score2 = 0;

	cin >> player1 >> player2;

	while (true)
	{
		string card1, card2;
		getline(cin >> ws, card1);
		if (card1 == "End of game")
		{
			cout << player1 << " has " << score1 << " points" << endl;
			cout << player2 << " has " << score2 << " points" << endl;
			break;
		}
		getline(cin >> ws, card2);
		if (card2 == "End of game")
		{
			cout << player1 << " has " << score1 << " points" << endl;
			cout << player2 << " has " << score2 << " points" << endl;
			break;
		}
		int cardValue1 = stoi(card1);
		int cardValue2 = stoi(card2);
		if (cardValue1 > cardValue2)
		{
			score1 += cardValue1 - cardValue2;
		}
		else if (cardValue2 > cardValue1)
		{
			score2 += cardValue2 - cardValue1;
		}
		else
		{

			while (true)
			{
				cout << "Number wars!" << endl;
				cin >> card1 >> card2;
				cardValue1 = stoi(card1);
				cardValue2 = stoi(card2);
				if (cardValue1 > cardValue2)
				{
					cout << player1 << " is winner with " << score1 << " points" << endl;
					
					break;
				}
				else if (cardValue2 > cardValue1)
				{
					cout << player2 << " is winner with " << score2 << " points" << endl;
					
					break;
				}
				else {
					continue;
				}
				
				
			}
			break;
		}
	}
	return 0;
}
